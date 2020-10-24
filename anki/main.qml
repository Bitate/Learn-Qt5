import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12


ApplicationWindow {
    id: applicationWindow
    title: qsTr("Anki")
    visible: true

    Button {
        id: button1
        x: 262
        y: 159
        text: qsTr("Button1")
    }
}


/*##^##
Designer {
    D{i:0;autoSize:true;formeditorZoom:0.75;height:480;width:640}D{i:1}
}
##^##*/
