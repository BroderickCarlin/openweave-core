
/**
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    THIS FILE IS GENERATED. DO NOT MODIFY.
 *
 *    SOURCE TEMPLATE: trait.cpp.h
 *    SOURCE PROTO: nest/test/trait/test_mismatched_c_trait.proto
 *
 */
#ifndef _NEST_TEST_TRAIT__TEST_MISMATCHED_C_TRAIT_H_
#define _NEST_TEST_TRAIT__TEST_MISMATCHED_C_TRAIT_H_

#include <Weave/Profiles/data-management/DataManagement.h>
#include <Weave/Support/SerializationUtils.h>



namespace Schema {
namespace Nest {
namespace Test {
namespace Trait {
namespace TestMismatchedCTrait {

extern const nl::Weave::Profiles::DataManagement::TraitSchemaEngine TraitSchema;

enum {
      kWeaveProfileId = (0x235aU << 16) | 0xfe03U
};

//
// Properties
//

enum {
    kPropertyHandle_Root = 1,

    //---------------------------------------------------------------------------------------------------------------------------//
    //  Name                                IDL Type                            TLV Type           Optional?       Nullable?     //
    //---------------------------------------------------------------------------------------------------------------------------//

    //
    //  tc_a                                bool                                 bool              NO              NO
    //
    kPropertyHandle_TcA = 2,

    //
    //  tc_b                                EnumC                                int               NO              NO
    //
    kPropertyHandle_TcB = 3,

    //
    //  tc_c                                StructC                              structure         NO              NO
    //
    kPropertyHandle_TcC = 4,

    //
    //  sc_a                                uint32                               uint32            NO              NO
    //
    kPropertyHandle_TcC_ScA = 5,

    //
    //  sc_b                                bool                                 bool              NO              NO
    //
    kPropertyHandle_TcC_ScB = 6,

    //
    //  sc_c                                uint32                               uint32            NO              NO
    //
    kPropertyHandle_TcC_ScC = 7,

    //
    //  tc_d                                uint32                               uint32            NO              NO
    //
    kPropertyHandle_TcD = 8,

    //
    //  tc_e                                StructC                              structure         NO              NO
    //
    kPropertyHandle_TcE = 9,

    //
    //  sc_a                                uint32                               uint32            NO              NO
    //
    kPropertyHandle_TcE_ScA = 10,

    //
    //  sc_b                                bool                                 bool              NO              NO
    //
    kPropertyHandle_TcE_ScB = 11,

    //
    //  sc_c                                uint32                               uint32            NO              NO
    //
    kPropertyHandle_TcE_ScC = 12,

    //
    // Enum for last handle
    //
    kLastSchemaHandle = 12,
};

//
// Event Structs
//

struct StructC
{
    uint32_t scA;
    bool scB;
    uint32_t scC;

    static const nl::SchemaFieldDescriptor FieldSchema;

};

struct StructC_array {
    uint32_t num;
    StructC *buf;
};

//
// Enums
//

enum EnumC {
    ENUM_C_VALUE_1 = 1,
    ENUM_C_VALUE_2 = 2,
    ENUM_C_VALUE_3 = 3,
};


} // namespace TestMismatchedCTrait
} // namespace Trait
} // namespace Test
} // namespace Nest
} // namespace Schema
#endif // _NEST_TEST_TRAIT__TEST_MISMATCHED_C_TRAIT_H_
