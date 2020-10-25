import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12


ApplicationWindow {
    id: applicationWindow
    title: qsTr("Anki")
    visible: true

    Text {
        id: text_1
        text: qsTr( Counter.display_initialization_info() )
    }





}


/*##^##
Designer {
    D{i:0;autoSize:true;formeditorZoom:0.75;height:480;width:640}D{i:1}
}
##^##*/
