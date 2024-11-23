#include "DynamicObstacleAvoidanceAgentSettings.h"

FDynamicObstacleAvoidanceAgentSettings::FDynamicObstacleAvoidanceAgentSettings() {
    this->AgentAvoidanceRadiusMargin = 0.00f;
    this->MinMovementSpeed = 0.00f;
    this->AgentTimeOfImpactToConsiderWaiting = 0.00f;
    this->SpeedRecoveryTimeout = 0.00f;
    this->AgentPriorityTimeout = 0.00f;
    this->AgentRepathingTimeout = 0.00f;
    this->AgentFailMovementTimeout = 0.00f;
    this->AllowPriorityAgent = false;
    this->bMergeObstacles = false;
    this->bCanFailMovement = false;
}

