import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts
import Test.My



Window {
    width: 800
    height: 600
    visible: true
    title: qsTr("Ivan's calculator")
    Material.theme: Material.Dark

    Calculator{
        id : calculator
    }


    Pane {
        anchors.fill: parent
        contentItem: ColumnLayout{
            RowLayout{
                TextField{
                    id:__input
                    Layout.fillWidth: true
                    font.pixelSize: 18
                }
                RoundButton{
                    text: "calculator"
                    radius: implicitBackgroundHeight/10
                    font.pixelSize: 18
                    onClicked: {
                        __calculate_result.text = "result: " + calculator.calculate(__input.text)
                    }
                }
            }
            Pane{
                Layout.fillHeight: true
                Layout.fillWidth: true
                background: Rectangle{
                    color: Qt.darker(Material.color(Material.Grey))
                    border.width: 1
                    border.color: "white"
                }
                Label{
                    id:__calculate_result
                    property real result: NaN
                    anchors.centerIn: parent
                    anchors.fill: parent
                    font.pixelSize: 25
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignHCenter
                    text: "GOGOGO"
                }
            }
        }
    }
}
