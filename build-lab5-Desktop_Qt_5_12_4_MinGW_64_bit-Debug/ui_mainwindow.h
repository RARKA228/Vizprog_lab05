/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClear;
    QAction *actionBold;
    QAction *actionUnderline;
    QAction *actionItalic;
    QAction *actionSelectFont;
    QAction *actionFind;
    QAction *actionReplace;
    QAction *actionInsertTable;
    QAction *actionAddRow;
    QAction *actionAddColumn;
    QAction *actionRemoveRow;
    QAction *actionRemoveColumn;
    QAction *actionfontColor;
    QAction *actionDataRecovery;
    QAction *actionNew_2;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuTable;
    QMenu *menuFont;
    QMenu *menuGraphics_window;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/toolbar/new-document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/toolbar/open-folder-with-document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/toolbar/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/toolbar/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/toolbar/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon4);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/toolbar/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/toolbar/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/toolbar/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/toolbar/broom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon8);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/toolbar/bold-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon9);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        actionBold->setFont(font);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/toolbar/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon10);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setUnderline(true);
        font1.setWeight(50);
        actionUnderline->setFont(font1);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/toolbar/italic-font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon11);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(14);
        font2.setItalic(true);
        actionItalic->setFont(font2);
        actionSelectFont = new QAction(MainWindow);
        actionSelectFont->setObjectName(QString::fromUtf8("actionSelectFont"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/toolbar/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectFont->setIcon(icon12);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/toolbar/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon13);
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName(QString::fromUtf8("actionReplace"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/toolbar/replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplace->setIcon(icon14);
        actionInsertTable = new QAction(MainWindow);
        actionInsertTable->setObjectName(QString::fromUtf8("actionInsertTable"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/toolbar/cells.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertTable->setIcon(icon15);
        actionAddRow = new QAction(MainWindow);
        actionAddRow->setObjectName(QString::fromUtf8("actionAddRow"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/toolbar/row.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddRow->setIcon(icon16);
        actionAddColumn = new QAction(MainWindow);
        actionAddColumn->setObjectName(QString::fromUtf8("actionAddColumn"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/toolbar/add-column.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddColumn->setIcon(icon17);
        actionRemoveRow = new QAction(MainWindow);
        actionRemoveRow->setObjectName(QString::fromUtf8("actionRemoveRow"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/toolbar/del-row.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveRow->setIcon(icon18);
        actionRemoveColumn = new QAction(MainWindow);
        actionRemoveColumn->setObjectName(QString::fromUtf8("actionRemoveColumn"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/toolbar/delete-column.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveColumn->setIcon(icon19);
        actionfontColor = new QAction(MainWindow);
        actionfontColor->setObjectName(QString::fromUtf8("actionfontColor"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/toolbar/font (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionfontColor->setIcon(icon20);
        actionDataRecovery = new QAction(MainWindow);
        actionDataRecovery->setObjectName(QString::fromUtf8("actionDataRecovery"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/toolbar/recovery.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDataRecovery->setIcon(icon21);
        actionNew_2 = new QAction(MainWindow);
        actionNew_2->setObjectName(QString::fromUtf8("actionNew_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 1920, 1000));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFormat = new QMenu(menuBar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuTable = new QMenu(menuBar);
        menuTable->setObjectName(QString::fromUtf8("menuTable"));
        menuFont = new QMenu(menuBar);
        menuFont->setObjectName(QString::fromUtf8("menuFont"));
        menuGraphics_window = new QMenu(menuBar);
        menuGraphics_window->setObjectName(QString::fromUtf8("menuGraphics_window"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuFormat->menuAction());
        menuBar->addAction(menuFont->menuAction());
        menuBar->addAction(menuTable->menuAction());
        menuBar->addAction(menuGraphics_window->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionClear);
        menuEdit->addAction(actionReplace);
        menuEdit->addAction(actionDataRecovery);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalic);
        menuFormat->addAction(actionUnderline);
        menuFormat->addAction(actionSelectFont);
        menuTable->addAction(actionInsertTable);
        menuTable->addAction(actionAddRow);
        menuTable->addAction(actionRemoveRow);
        menuTable->addAction(actionAddColumn);
        menuTable->addAction(actionRemoveColumn);
        menuFont->addAction(actionSelectFont);
        menuFont->addAction(actionfontColor);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionItalic);
        mainToolBar->addAction(actionUnderline);
        mainToolBar->addAction(actionSelectFont);
        mainToolBar->addAction(actionfontColor);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionDataRecovery);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRedo);
        mainToolBar->addAction(actionUndo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionInsertTable);
        mainToolBar->addAction(actionAddRow);
        mainToolBar->addAction(actionRemoveRow);
        mainToolBar->addAction(actionAddColumn);
        mainToolBar->addAction(actionRemoveColumn);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Beautiful Text Editor", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+\320\201", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("MainWindow", "Ctrl+Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionBold->setText(QApplication::translate("MainWindow", "Bold", nullptr));
        actionBold->setIconText(QApplication::translate("MainWindow", "B", nullptr));
        actionUnderline->setText(QApplication::translate("MainWindow", "Underline", nullptr));
        actionUnderline->setIconText(QApplication::translate("MainWindow", "U", nullptr));
        actionItalic->setText(QApplication::translate("MainWindow", "Italic", nullptr));
        actionItalic->setIconText(QApplication::translate("MainWindow", "I", nullptr));
        actionSelectFont->setText(QApplication::translate("MainWindow", "Select Font", nullptr));
        actionFind->setText(QApplication::translate("MainWindow", "Find", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionReplace->setText(QApplication::translate("MainWindow", "Replace", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReplace->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionInsertTable->setText(QApplication::translate("MainWindow", "InsertTable", nullptr));
#ifndef QT_NO_TOOLTIP
        actionInsertTable->setToolTip(QApplication::translate("MainWindow", "InsertTable", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionInsertTable->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionAddRow->setText(QApplication::translate("MainWindow", "AddRow", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAddRow->setToolTip(QApplication::translate("MainWindow", "AddRow", nullptr));
#endif // QT_NO_TOOLTIP
        actionAddColumn->setText(QApplication::translate("MainWindow", "AddColumn", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAddColumn->setToolTip(QApplication::translate("MainWindow", "AddColumn", nullptr));
#endif // QT_NO_TOOLTIP
        actionRemoveRow->setText(QApplication::translate("MainWindow", "RemoveRow", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoveRow->setToolTip(QApplication::translate("MainWindow", "Remove Row", nullptr));
#endif // QT_NO_TOOLTIP
        actionRemoveColumn->setText(QApplication::translate("MainWindow", "RemoveColumn", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoveColumn->setToolTip(QApplication::translate("MainWindow", "Remove Row", nullptr));
#endif // QT_NO_TOOLTIP
        actionfontColor->setText(QApplication::translate("MainWindow", "fontColor", nullptr));
        actionDataRecovery->setText(QApplication::translate("MainWindow", "Recovery", nullptr));
        actionNew_2->setText(QApplication::translate("MainWindow", "New", nullptr));
        textEdit->setStyleSheet(QApplication::translate("MainWindow", "QTextEdit { font-size: 14pt; padding: 10px; border: 1px solid #ccc; background-color: #f5f5f5; }", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("MainWindow", "Start typing your text here...", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuFormat->setTitle(QApplication::translate("MainWindow", "Format", nullptr));
        menuTable->setTitle(QApplication::translate("MainWindow", "Table", nullptr));
        menuFont->setTitle(QApplication::translate("MainWindow", "Font", nullptr));
        menuGraphics_window->setTitle(QApplication::translate("MainWindow", "Graphics window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
