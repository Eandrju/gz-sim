import QtQuick 2.9
import QtQuick.Controls 1.4
import QtQuick.Controls 2.2
import QtQuick.Controls.Material 2.1
import QtQuick.Layouts 1.3
import QtQuick.Controls.Styles 1.4
import "qrc:/ComponentInspector"
import "qrc:/qml"

// Item displaying 3D vector information.
Rectangle {
  height: header.height + content.height
  width: componentInspector.width
  color: "transparent"

  // Maximum spinbox value
  property double spinMax: 1000000

  Column {
    anchors.fill: parent

    Rectangle {
      id: header
      width: parent.width
      height: headerItem.height
      color: "transparent"

      TypeHeader {
        id: headerItem
      }
      MouseArea {
        anchors.fill: parent
        onClicked: {
          content.show = !content.show
        }
      }
    }

    Rectangle {
      id: content
      property bool show: true
      width: parent.width
      height: show ? grid.height : 0
      clip: true
      color: darkGrey

      GridLayout {
        id: grid
        width: parent.width
        columns: 4

        // Left spacer
        Item {
          Layout.rowSpan: 3
          width: 5
        }

        Text {
          text: 'X (m)'
          leftPadding: 5
          color: Material.theme == Material.Light ? "black" : "white"
          font.pointSize: 12
        }

        IgnSpinBox {
          id: xSpin
          value: model.data[0]
          minimumValue: -spinMax
          maximumValue: spinMax
          decimals: xSpin.width < 100 ? 2 : 6
          Layout.fillWidth: true
        }

        // Right spacer
        Item {
          Layout.rowSpan: 3
          width: 5
        }

        Text {
          text: 'Y (m)'
          leftPadding: 5
          color: Material.theme == Material.Light ? "black" : "white"
          font.pointSize: 12
        }

        IgnSpinBox {
          id: ySpin
          value: model.data[1]
          minimumValue: -spinMax
          maximumValue: spinMax
          decimals: ySpin.width < 100 ? 2 : 6
          Layout.fillWidth: true
        }

        Text {
          text: 'Z (m)'
          leftPadding: 5
          color: Material.theme == Material.Light ? "black" : "white"
          font.pointSize: 12
        }

        IgnSpinBox {
          id: zSpin
          value: model.data[2]
          minimumValue: -spinMax
          maximumValue: spinMax
          decimals: zSpin.width < 100 ? 2 : 6
          Layout.fillWidth: true
        }

        Behavior on height {
          NumberAnimation {
            duration: 200;
            easing.type: Easing.InOutQuad
          }
        }
      }
    }
  }
}
