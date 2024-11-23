#pragma once
#include "CoreMinimal.h"
#include "EModioErrorCondition.generated.h"

UENUM(BlueprintType)
enum class EModioErrorCondition : uint8 {
    NoError,
    NetworkError = 2,
    ConfigurationError,
    InvalidArgsError,
    FilesystemError,
    InternalError,
    ApiErrorRefSuccess,
    EntityNotFoundError = 12,
    UserTermsOfUseError,
    SubmitReportError,
    UserNotAuthenticatedError,
    SDKNotInitialized,
    UserAlreadyAuthenticatedError,
    SystemError,
    OperationCanceled,
    ModManagementDisabled,
    RateLimited,
    ModBeingProcessed,
    InsufficientSpace,
    SDKAlreadyInitialized,
    ModManagementAlreadyEnabled,
    InsufficientPermissions,
    EmailLoginCodeInvalid,
};

