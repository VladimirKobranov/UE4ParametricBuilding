#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UStaticMesh;
#include "BP_NYC_Building__pf3724377086.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/NYC_Building/BP_NYC_Building.BP_NYC_Building_C", OverrideNativeName="BP_NYC_Building_C"))
class ABP_NYC_Building_C__pf3724377086 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Components", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Wall Window", Category="Components", MultiLine="true", OverrideNativeName="MainWallWindow"))
	UStaticMesh* bpv__MainWallWindow__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="XNumber", Category="Variables", MultiLine="true", OverrideNativeName="XNumber"))
	int32 bpv__XNumber__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="YNumber", Category="Variables", MultiLine="true", OverrideNativeName="YNumber"))
	int32 bpv__YNumber__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Number Of Floors", Category="Variables", MultiLine="true", OverrideNativeName="NumberOfFloors"))
	int32 bpv__NumberOfFloors__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="ZTile", Category="Const", MultiLine="true", OverrideNativeName="ZTile"))
	int32 bpv__ZTile__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="XTile", Category="Const", MultiLine="true", OverrideNativeName="XTile"))
	int32 bpv__XTile__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="YTile", Category="Const", MultiLine="true", OverrideNativeName="YTile"))
	int32 bpv__YTile__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="ZTile First Floor", Category="Const", MultiLine="true", OverrideNativeName="ZTileFirstFloor"))
	int32 bpv__ZTileFirstFloor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Windows?", Category="Variables", MultiLine="true", OverrideNativeName="RandomWindows?"))
	bool bpv__RandomWindowsx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Wall Window Array", Category="Arrays", MultiLine="true", OverrideNativeName="MainWallWindowArray"))
	TArray<UStaticMesh*> bpv__MainWallWindowArray__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="First Floor Wall", Category="Components", MultiLine="true", OverrideNativeName="FirstFloorWall"))
	UStaticMesh* bpv__FirstFloorWall__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random First Floor?", Category="Variables", MultiLine="true", OverrideNativeName="RandomFirstFloor?"))
	bool bpv__RandomFirstFloorx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Door Position", Category="Variables", MultiLine="true", OverrideNativeName="DoorPosition"))
	int32 bpv__DoorPosition__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="First Floor Wall Blank", Category="Components", MultiLine="true", OverrideNativeName="FirstFloorWallBlank"))
	UStaticMesh* bpv__FirstFloorWallBlank__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roof Main", Category="Components", MultiLine="true", OverrideNativeName="RoofMain"))
	UStaticMesh* bpv__RoofMain__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roof Main Wall Blank", Category="Components", MultiLine="true", OverrideNativeName="RoofMainWallBlank"))
	UStaticMesh* bpv__RoofMainWallBlank__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Main Wall Blank", Category="Components", MultiLine="true", OverrideNativeName="MainWallBlank"))
	UStaticMesh* bpv__MainWallBlank__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="First Floor Door", Category="Components", MultiLine="true", OverrideNativeName="FirstFloorDoor"))
	UStaticMesh* bpv__FirstFloorDoor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fire Escape Position", Category="Variables", MultiLine="true", OverrideNativeName="FireEscapePosition"))
	int32 bpv__FireEscapePosition__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FE Platform Hole", Category="FireEscape", MultiLine="true", OverrideNativeName="FE_Platform_Hole"))
	UStaticMesh* bpv__FE_Platform_Hole__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FE Stairs", Category="FireEscape", MultiLine="true", OverrideNativeName="FE_Stairs"))
	UStaticMesh* bpv__FE_Stairs__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FE Ladder", Category="FireEscape", MultiLine="true", OverrideNativeName="FE_Ladder"))
	UStaticMesh* bpv__FE_Ladder__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="First Floor Array", Category="Arrays", MultiLine="true", OverrideNativeName="FirstFloorArray"))
	TArray<UStaticMesh*> bpv__FirstFloorArray__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FE Platform", Category="FireEscape", MultiLine="true", OverrideNativeName="FE_Platform"))
	UStaticMesh* bpv__FE_Platform__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Difference Between First and Second Floors", Category="Const", MultiLine="true", OverrideNativeName="DifferenceBetweenFirstAndSecondFloors"))
	int32 bpv__DifferenceBetweenFirstAndSecondFloors__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Corners?", Category="Variables", MultiLine="true", tooltip="You know this word?", OverrideNativeName="Corners?"))
	bool bpv__Cornersx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Brandmauer?", Category="Variables", MultiLine="true", tooltip="You know this word?", OverrideNativeName="Brandmauer?"))
	bool bpv__Brandmauerx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Corner Main", Category="Corners", MultiLine="true", OverrideNativeName="CornerMain"))
	UStaticMesh* bpv__CornerMain__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Corner Main Brandmauer", Category="Corners", MultiLine="true", OverrideNativeName="CornerMainBrandmauer"))
	UStaticMesh* bpv__CornerMainBrandmauer__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Corner First Floor", Category="Corners", MultiLine="true", OverrideNativeName="CornerFirstFloor"))
	UStaticMesh* bpv__CornerFirstFloor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Corner Roof", Category="Corners", MultiLine="true", OverrideNativeName="CornerRoof"))
	UStaticMesh* bpv__CornerRoof__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roof", Category="Components", MultiLine="true", OverrideNativeName="Roof"))
	UStaticMesh* bpv__Roof__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Roof ZOffset", Category="Const", MultiLine="true", OverrideNativeName="RoofZOffset"))
	int32 bpv__RoofZOffset__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="First Floor Doors Array", Category="Arrays", MultiLine="true", OverrideNativeName="FirstFloorDoorsArray"))
	TArray<UStaticMesh*> bpv__FirstFloorDoorsArray__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Corner Roof Brandmauer", Category="Corners", MultiLine="true", OverrideNativeName="CornerRoofBrandmauer"))
	UStaticMesh* bpv__CornerRoofBrandmauer__pf;
	ABP_NYC_Building_C__pf3724377086(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MeshFunction"))
	virtual void bpf__MeshFunction__pf(FTransform bpp__Transform__pf, UStaticMesh* bpp__Mesh__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FireEscapeFunctions"))
	virtual void bpf__FireEscapeFunctions__pf(FTransform bpp__Transform__pf, UStaticMesh* bpp__Mesh_1__pf, UStaticMesh* bpp__Mesh_2__pf, UStaticMesh* bpp__Mesh_3__pf);
public:
};
