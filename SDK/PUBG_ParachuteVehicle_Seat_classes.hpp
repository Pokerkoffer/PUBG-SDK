#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// BlueprintGeneratedClass ParachuteVehicle_Seat.ParachuteVehicle_Seat_C
	// 0x0008 (0x0430 - 0x0428)
	class AParachuteVehicle_Seat_C : public AParachuteVehicleSeatActor
	{
	public:
		class USceneComponent*                             DefaultSceneRoot;                                         // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0x1a9ad345);
			return ptr;
		}


		void UserConstructionScript();
	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
