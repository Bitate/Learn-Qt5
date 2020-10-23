import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Shapes 1.12
import Myclass 1.0

ApplicationWindow {
    id: applicationWindow
    // title
    title: qsTr("Anki")
    visible: true
    property Outputer outputer: null

    Button {
        id: button1
        x: 262
        y: 159
        text: qsTr("Button1")

        Connections {
            target: button1
            onClicked: applicationWindow.state = ""
        }
    }

    Text {
        id: text1
        x: 238
        y: 295
        width: 124
        height: 25
        text: qsTr("This is text")
        font.pixelSize: 12

        Connections {
            target: text1
            onClicked: console.log("clicked")
        }
    }




}


/*##^##
Designer {
    D{i:0;autoSize:true;formeditorZoom:0.75;height:480;width:640}D{i:1}
}
##^##*/
