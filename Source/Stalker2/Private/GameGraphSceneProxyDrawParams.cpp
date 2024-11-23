#include "GameGraphSceneProxyDrawParams.h"

FGameGraphSceneProxyDrawParams::FGameGraphSceneProxyDrawParams() {
    this->bEnableMinMaxPathColoring = false;
    this->bEnableAgentSupportMaskColoring = false;
    this->bEnablePolyBindConnectivityColoring = false;
    this->bDebugContextualActions = false;
    this->PolyBindConnectivityNavDataIdx = 0;
}

