#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceAkEvent.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew)
class STALKER2_API UNiagaraDataInterfaceAkEvent : public UNiagaraDataInterface {
    GENERATED_UCLASS_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* Event;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* StopEvent;
    
    //UNiagaraDataInterfaceAkEvent();

	virtual void PostInitProperties() override { Super::PostInitProperties(); };
	
	//UNiagaraDataInterface Interface
	virtual FNiagaraDataInterfaceParametersCS* CreateShaderStorage(const FNiagaraDataInterfaceGPUParamInfo& ParameterInfo, const FShaderParameterMap& ParameterMap) const { return NULL; };

    virtual void BindParameters(struct FNiagaraDataInterfaceParametersCS *,struct FNiagaraDataInterfaceGPUParamInfo const &,class FShaderParameterMap const &) override { }
    virtual void SetParameters(struct FNiagaraDataInterfaceParametersCS const *,class FRHICommandList &,struct FNiagaraDataInterfaceSetArgs const &) const override { }
    virtual void UnsetParameters(struct FNiagaraDataInterfaceParametersCS const *,class FRHICommandList &,struct FNiagaraDataInterfaceSetArgs const &) const override { }
    virtual void BuildShaderParameters(class FNiagaraShaderParametersBuilder&) const override { }
    virtual struct FTypeLayoutDesc const * GetComputeParametersTypeDesc() const override { return NULL; }
    virtual struct FNiagaraDataInterfaceParametersCS* CreateComputeParameters() const { return NULL; }

    virtual FTypeLayoutDesc* GetShaderStorageType() const override { return NULL; }

    virtual bool HasInternalAttributeReads(class UNiagaraEmitter const *,class UNiagaraEmitter const *) const override { return true; }
    virtual bool UseLegacyShaderBindings() const override { return true; }
    //UNiagaraDataInterface Interface

	virtual bool CopyToInternal(UNiagaraDataInterface* Destination) const override { return true; };
};

