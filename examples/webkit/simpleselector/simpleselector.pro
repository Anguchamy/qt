QT       += webkit
FORMS     = window.ui
HEADERS   = window.h
SOURCES   = main.cpp \
            window.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/webkit/simpleselector
sources.files = $$SOURCES $$HEADERS $$FORMS $$RESOURCES *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/webkit/simpleselector
INSTALLS += target sources
