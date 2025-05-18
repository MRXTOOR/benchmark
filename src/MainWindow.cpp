#include "MainWindow.h"
#include <AUI/Util/UIBuildingHelpers.h>
#include <AUI/View/ALabel.h>
#include <AUI/View/AButton.h>

using namespace declarative;

MainWindow::MainWindow()
  : AWindow("benchmark", 300_dp, 200_dp) {
    setContents(Centered { Vertical {
      Label { "Version: " AUI_PP_STRINGIZE(AUI_CMAKE_PROJECT_VERSION) },
    } });
}