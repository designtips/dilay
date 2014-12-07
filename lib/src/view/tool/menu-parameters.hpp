#ifndef DILAY_VIEW_TOOL_MENU_PARAMETERS
#define DILAY_VIEW_TOOL_MENU_PARAMETERS

#include <glm/fwd.hpp>
#include "macro.hpp"

class ViewMainWindow;

class ViewToolMenuParameters {
  public:
    DECLARE_BIG4COPY (ViewToolMenuParameters, ViewMainWindow&, const glm::ivec2&)

    ViewMainWindow&   mainWindow    () const;
    const glm::ivec2& clickPosition () const;

  private:
    IMPLEMENTATION
};

#endif