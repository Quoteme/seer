#include "SeerEditorWidget.h"
#include <QtCore/QDebug>

SeerEditorWidgetBreakPointArea::SeerEditorWidgetBreakPointArea(SeerEditorWidgetSourceArea* editorWidget) : QWidget(editorWidget) {
    _editorWidget = editorWidget;
}

QSize SeerEditorWidgetBreakPointArea::sizeHint () const {
    return QSize(_editorWidget->breakPointAreaWidth(), 0);
}

void SeerEditorWidgetBreakPointArea::paintEvent (QPaintEvent* event) {
    _editorWidget->breakPointAreaPaintEvent(event);
}

void SeerEditorWidgetBreakPointArea::mouseDoubleClickEvent (QMouseEvent* event) {

    if (event->button() == Qt::LeftButton) {
        _editorWidget->setQuickBreakpoint(event);

    }else{
        QWidget::mouseDoubleClickEvent(event);
    }
}

void SeerEditorWidgetBreakPointArea::mouseMoveEvent (QMouseEvent* event) {

    QWidget::mouseMoveEvent(event);
}

void SeerEditorWidgetBreakPointArea::mousePressEvent (QMouseEvent* event) {

    if (event->button() == Qt::RightButton) {
        _editorWidget->showContextMenu(event);

    }else{
        QWidget::mousePressEvent(event);
    }
}

void SeerEditorWidgetBreakPointArea::mouseReleaseEvent (QMouseEvent* event) {

    QWidget::mouseReleaseEvent(event);
}

//
//
//

SeerEditorWidgetAssemblyBreakPointArea::SeerEditorWidgetAssemblyBreakPointArea(SeerEditorWidgetAssemblyArea* editorWidget) : QWidget(editorWidget) {
    _editorWidget = editorWidget;
}

QSize SeerEditorWidgetAssemblyBreakPointArea::sizeHint () const {
    return QSize(_editorWidget->breakPointAreaWidth(), 0);
}

void SeerEditorWidgetAssemblyBreakPointArea::paintEvent (QPaintEvent* event) {
    _editorWidget->breakPointAreaPaintEvent(event);
}

void SeerEditorWidgetAssemblyBreakPointArea::mouseDoubleClickEvent (QMouseEvent* event) {

    if (event->button() == Qt::LeftButton) {
        _editorWidget->setQuickBreakpoint(event);

    }else{
        QWidget::mouseDoubleClickEvent(event);
    }
}

void SeerEditorWidgetAssemblyBreakPointArea::mouseMoveEvent (QMouseEvent* event) {

    QWidget::mouseMoveEvent(event);
}

void SeerEditorWidgetAssemblyBreakPointArea::mousePressEvent (QMouseEvent* event) {

    if (event->button() == Qt::RightButton) {
        _editorWidget->showContextMenu(event);

    }else{
        QWidget::mousePressEvent(event);
    }
}

void SeerEditorWidgetAssemblyBreakPointArea::mouseReleaseEvent (QMouseEvent* event) {

    QWidget::mouseReleaseEvent(event);
}

