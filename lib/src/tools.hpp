/* This file is part of Dilay
 * Copyright © 2015-2018 Alexander Bau
 * Use and redistribute under the terms of the GNU General Public License
 */
#ifndef DILAY_TOOLS
#define DILAY_TOOLS

#include "tool.hpp"
#include "tool/sculpt.hpp"

DECLARE_TOOL (TransformMesh, DECLARE_TOOL_RUN_MOVE_EVENT DECLARE_TOOL_RUN_PRESS_EVENT
                               DECLARE_TOOL_RUN_RELEASE_EVENT DECLARE_TOOL_RUN_COMMIT)

DECLARE_TOOL (DeleteMesh, DECLARE_TOOL_RUN_RELEASE_EVENT)

DECLARE_TOOL (NewMesh, DECLARE_TOOL_RUN_RENDER DECLARE_TOOL_RUN_COMMIT)

DECLARE_TOOL_SCULPT (SculptDraw)
DECLARE_TOOL_SCULPT (SculptGrab)
DECLARE_TOOL_SCULPT (SculptSmooth)
DECLARE_TOOL_SCULPT (SculptFlatten)
DECLARE_TOOL_SCULPT (SculptCrease)
DECLARE_TOOL_SCULPT (SculptPinch)
DECLARE_TOOL_SCULPT (SculptReduce)

DECLARE_TOOL (EditSketch, DECLARE_TOOL_RUN_MOVE_EVENT DECLARE_TOOL_RUN_PRESS_EVENT
                            DECLARE_TOOL_RUN_RELEASE_EVENT DECLARE_TOOL_RUN_COMMIT)

DECLARE_TOOL (DeleteSketch, DECLARE_TOOL_RUN_RELEASE_EVENT)

DECLARE_TOOL (RebalanceSketch, DECLARE_TOOL_RUN_RELEASE_EVENT DECLARE_TOOL_RUN_COMMIT)

DECLARE_TOOL (ConvertSketch, DECLARE_TOOL_RUN_RELEASE_EVENT)

DECLARE_TOOL (SketchSpheres, DECLARE_TOOL_RUN_RENDER DECLARE_TOOL_RUN_MOVE_EVENT
                               DECLARE_TOOL_RUN_PRESS_EVENT DECLARE_TOOL_RUN_RELEASE_EVENT
                                 DECLARE_TOOL_RUN_MOUSE_WHEEL_EVENT DECLARE_TOOL_RUN_CURSOR_UPDATE
                                   DECLARE_TOOL_RUN_COMMIT DECLARE_TOOL_RUN_FROM_CONFIG)

DECLARE_TOOL (TrimMesh,
              DECLARE_TOOL_RUN_MOVE_EVENT DECLARE_TOOL_RUN_MOUSE_WHEEL_EVENT
                DECLARE_TOOL_RUN_RELEASE_EVENT DECLARE_TOOL_RUN_PAINT DECLARE_TOOL_RUN_COMMIT)

DECLARE_TOOL (Remesh,
              DECLARE_TOOL_RUN_MOVE_EVENT DECLARE_TOOL_RUN_PRESS_EVENT
                DECLARE_TOOL_RUN_RELEASE_EVENT DECLARE_TOOL_RUN_PAINT DECLARE_TOOL_RUN_COMMIT)

#endif
