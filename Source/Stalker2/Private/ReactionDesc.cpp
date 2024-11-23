#include "ReactionDesc.h"

FReactionDesc::FReactionDesc() {
    this->RelationToProvoker = ERelationLevel::Enemy;
    this->RelationToRequester = ERelationLevel::Enemy;
    this->ReactionValue = 0;
}

