import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import Myclass 1.0

ApplicationWindow {
    id: applicationWindow
    // title
    title: qsTr("Anki")
    visible: true

    // menu
    menuBar: MenuBar {
        Outputer{
            id: my_outputer
        }

        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("Switch Profile")
                MouseArea.onClicked: {
                    Qt.quit()
                }
                Component.onCompleted:{
                    my_outputer.set_name("OK")
                    console.log("Hello")
                }


            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }

        Menu {
            title: qsTr("Edit")

        }

        Menu {
            title: qsTr("Tools")
        }

        Menu {
            title: qsTr("Help")
        }
    }

    // Content Area

    Text {
        id: greetings
        text: qsTr("Hello, I'm Anki :) ")
    }

    Cell {

    }
}

/*##^##
Designer {
    D{i:0;autoSize:true;formeditorZoom:0.6600000262260437;height:480;width:640}
}
##^##*/
