import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

ApplicationWindow {
    id: applicationWindow
    // title
    title: qsTr("Anki")
    visible: true

    // menu
    menuBar: MenuBar {
        Menu {
            title: qsTr("File")
            MenuItem {
                text: qsTr("Switch Profile")


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


}

/*##^##
Designer {
    D{i:0;autoSize:true;formeditorZoom:0.6600000262260437;height:480;width:640}
}
##^##*/
