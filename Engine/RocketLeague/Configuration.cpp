#include "Configuration.hpp"

/*
# ========================================================================================= #
# Configuration
# ========================================================================================= #
*/

namespace Configuration
{
    const bool UsingConstants =                         false; // If you want to use constant variables for everything, instead of FindClass (very efficient, but need to generate new sdk everytime the game updates),
    const bool UsingOffsets =                           true; // If you're using offsets or FindPattern to find GObjects & GNames,
    const bool UsingDetours =                           true; // If you're goning to be detouring/using the VfTable for process event change this to true, if you're using virtual voids change this to false,
    const bool UsingEnumClasses =                       true; // If you want to use enum classes over just normal enums.
    const bool PrintFlagEnums =							true; // If you want the EFunctionFlags, EPropertyFlags, and EObjectFlags enum so be generated in the final sdk.
    const std::string EnumClassType =                   "uint8_t"; // Underlying field type if you set UsingEnumClasses to true.

    const int32_t CommentSpacer =                       30;
    const int32_t ConstSpacer =                         50;
    const int32_t EnumSpacer =                          50;
    const int32_t StructSpacer =                        50;
    const int32_t FunctionSpacer =                      50;
    const int32_t ClassSpacer =                         50;
    const EAlignment Alignment =                        EAlignment::NONE;
    const int32_t FinalAlignment =			            0x1; // Alignment used in the final generated sdk, this defines fields byte class/structs alignment.

    const int32_t ProcessEventIndex =                   67; // Position where the Process Event function is in UObject's VfTable.
    const std::string ProcessEventString =              "null";
    const uint8_t* ProcessEventPattern =                (uint8_t*)"null";
    const char* ProcessEventMask =                      (char*)"null";

    const std::string GObjectsString =                  "null";
    const uint8_t* GObjectsPattern =                    (uint8_t*)"null";
    const char* GObjectsMask =                          (char*)"null";
    const uintptr_t GObjectsOffset =                    (uintptr_t)0x21F0668;

    const std::string GNamesString =                    "null";
    const uint8_t* GNamesPattern =                      (uint8_t*)"null";
    const char* GNamesMask =                            (char*)"null";
    const uintptr_t GNamesOffset =                      (uintptr_t)0x21F0620;

    const std::string GameName =                        "Rocket League";
    const std::string GameNameShort =                   "RLSDK";
    const std::string GameVersion =                     "2.09";
    const std::filesystem::path GeneratorDirectory =    "C:\\Users\\matias\\Desktop\\UE3SDKGenerator";
}

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/
