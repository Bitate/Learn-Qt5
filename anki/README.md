## Code Root Types
```QML
 import QtQuick 2.0

// declare a root Rectangle type
 Rectangle {
     id: page // id used to refer this object later
     width: 320; height: 480
     color: "lightgray"

    // declare a Text type
     Text {
         id: helloText
         text: "Hello world!"
         y: 30
         anchors.horizontalCenter: page.horizontalCenter
         font.pointSize: 24; font.bold: true
    }
} 
```

## QML Component
A component provides a way of defining a new type that we can re-use in other QML files. A QML component is like a black-box and interacts with the outside world through properties, signals and functions and is generally defined in its own QML file. The component's filename must always start with a capital letter.

Here is the QML code for Cell Component named Cell.qml:
```QML
 import QtQuick 2.0

 // An Item is the most basic visual type in QML and is often used as a container for other types.
 Item {
     id: container
     property alias cellColor: rectangle.color
     signal clicked(cellColor: color)

     width: 40; height: 25

     Rectangle {
         id: rectangle
         border.color: "white"
         anchors.fill: parent
     }

     MouseArea {
         anchors.fill: parent
         onClicked: container.clicked(container.cellColor)
     }
 } 
 ```
 In our main QML file, we use our Cell component to create the color picker:
 ```
 import QtQuick 2.0

 Rectangle {
     id: page
     width: 320; height: 480
     color: "lightgray"

     Text {
         id: helloText
         text: "Hello world!"
         y: 30
         anchors.horizontalCenter: page.horizontalCenter
         font.pointSize: 24; font.bold: true
     }

     Grid {
         id: colorPicker
         x: 4; anchors.bottom: page.bottom; anchors.bottomMargin: 4
         rows: 2; columns: 3; spacing: 3

         Cell { cellColor: "red"; onClicked: helloText.color = cellColor }
         Cell { cellColor: "green"; onClicked: helloText.color = cellColor }
         Cell { cellColor: "blue"; onClicked: helloText.color = cellColor }
         Cell { cellColor: "yellow"; onClicked: helloText.color = cellColor }
         Cell { cellColor: "steelblue"; onClicked: helloText.color = cellColor }
         Cell { cellColor: "black"; onClicked: helloText.color = cellColor }
     }
 }
 ```