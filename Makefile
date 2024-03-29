#############################################################################
# Makefile for building: GUI_ver_2
# Generated by qmake (3.0) (Qt 5.2.1)
# Project:  GUI_ver_2.pro
# Template: app
# Command: G:\MEPHI\QT\5.2.1\mingw48_32\bin\qmake.exe -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile GUI_ver_2.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = G:\MEPHI\QT\5.2.1\mingw48_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: GUI_ver_2.pro G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/win32-g++/qmake.conf G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/spec_pre.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/qdevice.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/device_config.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/common/shell-win32.conf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/qconfig.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_axbase.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_axbase_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_axcontainer.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_axserver.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_axserver_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_bluetooth.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_clucene_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_concurrent.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_core.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_core_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_declarative.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_declarative_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_designer.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_designer_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_gui.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_gui_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_help.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_help_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_multimedia.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_network.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_network_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_nfc.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_nfc_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_opengl.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_opengl_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_openglextensions.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_positioning.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_positioning_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_printsupport.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_qml.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_qml_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_qmltest.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_quick.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_quick_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_script.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_script_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_scripttools.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_sensors.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_sensors_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_serialport.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_serialport_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_sql.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_sql_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_svg.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_svg_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_testlib.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_testlib_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_uitools.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_uitools_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_webkit.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_webkit_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_widgets.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_widgets_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_winextras.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_winextras_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_xml.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_xml_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/qt_functions.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/qt_config.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/win32-g++/qmake.conf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/spec_post.prf \
		.qmake.stash \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/exclusive_builds.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/default_pre.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/win32/default_pre.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/resolve_config.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/exclusive_builds_post.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/default_post.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/c++11.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/qml_debug.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/win32/rtti.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/warn_on.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/qt.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/resources.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/moc.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/win32/opengl.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/uic.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/win32/windows.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/testcase_targets.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/exceptions.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/yacc.prf \
		G:/MEPHI/QT/5.2.1/mingw48_32/mkspecs/features/lex.prf \
		GUI_ver_2.pro \
		G:/MEPHI/QT/5.2.1/mingw48_32/lib/Qt5Widgets.prl \
		G:/MEPHI/QT/5.2.1/mingw48_32/lib/Qt5Gui.prl \
		G:/MEPHI/QT/5.2.1/mingw48_32/lib/Qt5Core.prl
	$(QMAKE) -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile GUI_ver_2.pro
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\spec_pre.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\qdevice.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\device_config.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\common\shell-win32.conf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\qconfig.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_axbase.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_axbase_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_axcontainer.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_axcontainer_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_axserver.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_axserver_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_bluetooth.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_bluetooth_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_bootstrap_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_clucene_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_concurrent.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_concurrent_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_core.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_core_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_declarative.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_declarative_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_designer.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_designer_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_designercomponents_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_gui.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_gui_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_help.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_help_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_multimedia.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_multimedia_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_multimediawidgets.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_network.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_network_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_nfc.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_nfc_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_opengl.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_opengl_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_openglextensions.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_openglextensions_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_platformsupport_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_positioning.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_positioning_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_printsupport.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_printsupport_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_qml.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_qml_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_qmldevtools_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_qmltest.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_qmltest_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_quick.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_quick_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_quickparticles_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_script.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_script_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_scripttools.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_scripttools_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_sensors.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_sensors_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_serialport.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_serialport_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_sql.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_sql_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_svg.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_svg_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_testlib.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_testlib_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_uitools.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_uitools_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_webkit.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_webkit_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_webkitwidgets.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_widgets.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_widgets_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_winextras.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_winextras_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_xml.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_xml_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_xmlpatterns.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\qt_functions.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\qt_config.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\win32-g++\qmake.conf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\spec_post.prf:
.qmake.stash:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\exclusive_builds.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\default_pre.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\win32\default_pre.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\resolve_config.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\exclusive_builds_post.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\default_post.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\c++11.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\qml_debug.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\win32\rtti.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\warn_on.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\qt.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\resources.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\moc.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\win32\opengl.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\uic.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\win32\windows.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\testcase_targets.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\exceptions.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\yacc.prf:
G:\MEPHI\QT\5.2.1\mingw48_32\mkspecs\features\lex.prf:
GUI_ver_2.pro:
G:/MEPHI/QT/5.2.1/mingw48_32/lib/Qt5Widgets.prl:
G:/MEPHI/QT/5.2.1/mingw48_32/lib/Qt5Gui.prl:
G:/MEPHI/QT/5.2.1/mingw48_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ CONFIG+=debug CONFIG+=qml_debug -o Makefile GUI_ver_2.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first FORCE
all: debug-all release-all FORCE
clean: debug-clean release-clean FORCE
distclean: debug-distclean release-distclean FORCE
	-$(DEL_FILE) Makefile

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
