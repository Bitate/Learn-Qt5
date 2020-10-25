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
 ```qml
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

## What are signals & slots ?
A signal is emitted when a particular event/action occurs. Qt has many predefined signals, but we can always subclass widgets to add our own handmade signals. 
A slot is a function that is called in response to a particular signal. Qt has many pre-defined slots, but we should subclass widgets and add our own slots so that we can handle the signals that we are interested in.
You trigger a signal, then the slot function gets called.


## QML User-defined Type
```cpp
class Message : public QObject
{
    // ...
}
```

```qml
// Use a user-defined type in *.qml files
Message {
    // ...
}
```

## Expose Properties
* A property is a data member of a C++ class with an associated read function and optional write function.
* A property is specified for any QObject-derived class using the Q_PROPERTY() macro. 
* All properties of a C++ QObject-derived class are accessible from QML files.

## Expose Methods
Any method of a C++ QObject-derived class is accessible from QML code if it is:
* A public method  with Q_INVOKABLE() macro at the beginning of the declaration.
* A method that is a public Qt slot.

## Exposing Signals
Any public signal of a C++ QObject-derived class is accessible from QML code.


 ## Some Unorganized Points
 A property alias something: id.property automatically creates a bi-directional binding. A simple rule of thumbs is: Use property alias ...:... if it is logically an alias, so the properties are intrinsically the same. This is usually the case if you want to export properties from children to the outside, or even whole children.

 Using alias means use another name for property like C++ reference type declaration. The main usage of alias is to ability to export inner scope property to outer scope of object scope. Also we can use property to achieve this goal across binding feature of qml. 
 
A Connections object can receive any signal from its specified target.