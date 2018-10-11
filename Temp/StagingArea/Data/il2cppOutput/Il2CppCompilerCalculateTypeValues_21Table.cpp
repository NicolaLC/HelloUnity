#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// LoadImageFromURL
struct LoadImageFromURL_t3480280544;
// MoenenGames.EightBeatMan.TransformTransformEvent
struct TransformTransformEvent_t3721692317;
// Outline
struct Outline_t3665521661;
// SearchImageOnWeb
struct SearchImageOnWeb_t2767873780;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t1185182177;
// UIMessage
struct UIMessage_t2721655451;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.WWW
struct WWW_t3688466362;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef JSON_T27535148_H
#define JSON_T27535148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json
struct  Json_t27535148  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T27535148_H
#ifndef PARSER_T3021620180_H
#define PARSER_T3021620180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser
struct  Parser_t3021620180  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json/Parser::json
	StringReader_t3465604688 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t3021620180, ___json_1)); }
	inline StringReader_t3465604688 * get_json_1() const { return ___json_1; }
	inline StringReader_t3465604688 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t3465604688 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((&___json_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T3021620180_H
#ifndef SERIALIZER_T1539586466_H
#define SERIALIZER_T1539586466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Serializer
struct  Serializer_t1539586466  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t1539586466, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T1539586466_H
#ifndef U3CSEARCHU3EC__ITERATOR0_T4139289244_H
#define U3CSEARCHU3EC__ITERATOR0_T4139289244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchImageOnWeb/<Search>c__Iterator0
struct  U3CSearchU3Ec__Iterator0_t4139289244  : public RuntimeObject
{
public:
	// UnityEngine.Networking.UnityWebRequest SearchImageOnWeb/<Search>c__Iterator0::<www>__1
	UnityWebRequest_t463507806 * ___U3CwwwU3E__1_0;
	// SearchImageOnWeb SearchImageOnWeb/<Search>c__Iterator0::$this
	SearchImageOnWeb_t2767873780 * ___U24this_1;
	// System.Object SearchImageOnWeb/<Search>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean SearchImageOnWeb/<Search>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 SearchImageOnWeb/<Search>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CwwwU3E__1_0() { return static_cast<int32_t>(offsetof(U3CSearchU3Ec__Iterator0_t4139289244, ___U3CwwwU3E__1_0)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E__1_0() const { return ___U3CwwwU3E__1_0; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E__1_0() { return &___U3CwwwU3E__1_0; }
	inline void set_U3CwwwU3E__1_0(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__1_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSearchU3Ec__Iterator0_t4139289244, ___U24this_1)); }
	inline SearchImageOnWeb_t2767873780 * get_U24this_1() const { return ___U24this_1; }
	inline SearchImageOnWeb_t2767873780 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(SearchImageOnWeb_t2767873780 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CSearchU3Ec__Iterator0_t4139289244, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CSearchU3Ec__Iterator0_t4139289244, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CSearchU3Ec__Iterator0_t4139289244, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSEARCHU3EC__ITERATOR0_T4139289244_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef U3CSTARTU3EC__ITERATOR0_T3043381165_H
#define U3CSTARTU3EC__ITERATOR0_T3043381165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadImageFromURL/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t3043381165  : public RuntimeObject
{
public:
	// UnityEngine.WWW LoadImageFromURL/<Start>c__Iterator0::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_0;
	// UnityEngine.Texture2D LoadImageFromURL/<Start>c__Iterator0::<texture>__0
	Texture2D_t3840446185 * ___U3CtextureU3E__0_1;
	// UnityEngine.Rect LoadImageFromURL/<Start>c__Iterator0::<rect>__0
	Rect_t2360479859  ___U3CrectU3E__0_2;
	// UnityEngine.Sprite LoadImageFromURL/<Start>c__Iterator0::<sprite>__0
	Sprite_t280657092 * ___U3CspriteU3E__0_3;
	// LoadImageFromURL LoadImageFromURL/<Start>c__Iterator0::$this
	LoadImageFromURL_t3480280544 * ___U24this_4;
	// System.Object LoadImageFromURL/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean LoadImageFromURL/<Start>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 LoadImageFromURL/<Start>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CwwwU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U3CwwwU3E__0_0)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_0() const { return ___U3CwwwU3E__0_0; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_0() { return &___U3CwwwU3E__0_0; }
	inline void set_U3CwwwU3E__0_0(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CtextureU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U3CtextureU3E__0_1)); }
	inline Texture2D_t3840446185 * get_U3CtextureU3E__0_1() const { return ___U3CtextureU3E__0_1; }
	inline Texture2D_t3840446185 ** get_address_of_U3CtextureU3E__0_1() { return &___U3CtextureU3E__0_1; }
	inline void set_U3CtextureU3E__0_1(Texture2D_t3840446185 * value)
	{
		___U3CtextureU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextureU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CrectU3E__0_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U3CrectU3E__0_2)); }
	inline Rect_t2360479859  get_U3CrectU3E__0_2() const { return ___U3CrectU3E__0_2; }
	inline Rect_t2360479859 * get_address_of_U3CrectU3E__0_2() { return &___U3CrectU3E__0_2; }
	inline void set_U3CrectU3E__0_2(Rect_t2360479859  value)
	{
		___U3CrectU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CspriteU3E__0_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U3CspriteU3E__0_3)); }
	inline Sprite_t280657092 * get_U3CspriteU3E__0_3() const { return ___U3CspriteU3E__0_3; }
	inline Sprite_t280657092 ** get_address_of_U3CspriteU3E__0_3() { return &___U3CspriteU3E__0_3; }
	inline void set_U3CspriteU3E__0_3(Sprite_t280657092 * value)
	{
		___U3CspriteU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CspriteU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U24this_4)); }
	inline LoadImageFromURL_t3480280544 * get_U24this_4() const { return ___U24this_4; }
	inline LoadImageFromURL_t3480280544 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(LoadImageFromURL_t3480280544 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3043381165, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T3043381165_H
#ifndef TOKEN_T3126366611_H
#define TOKEN_T3126366611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t3126366611 
{
public:
	// System.Int32 MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TOKEN_t3126366611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKEN_T3126366611_H
#ifndef U3CLOADIMAGEU3EC__ITERATOR1_T1052931369_H
#define U3CLOADIMAGEU3EC__ITERATOR1_T1052931369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchImageOnWeb/<LoadImage>c__Iterator1
struct  U3CLoadImageU3Ec__Iterator1_t1052931369  : public RuntimeObject
{
public:
	// System.String SearchImageOnWeb/<LoadImage>c__Iterator1::url
	String_t* ___url_0;
	// UnityEngine.WWW SearchImageOnWeb/<LoadImage>c__Iterator1::<www>__0
	WWW_t3688466362 * ___U3CwwwU3E__0_1;
	// UnityEngine.Texture2D SearchImageOnWeb/<LoadImage>c__Iterator1::<texture>__0
	Texture2D_t3840446185 * ___U3CtextureU3E__0_2;
	// UnityEngine.Rect SearchImageOnWeb/<LoadImage>c__Iterator1::<rect>__0
	Rect_t2360479859  ___U3CrectU3E__0_3;
	// UnityEngine.Sprite SearchImageOnWeb/<LoadImage>c__Iterator1::<sprite>__0
	Sprite_t280657092 * ___U3CspriteU3E__0_4;
	// SearchImageOnWeb SearchImageOnWeb/<LoadImage>c__Iterator1::$this
	SearchImageOnWeb_t2767873780 * ___U24this_5;
	// System.Object SearchImageOnWeb/<LoadImage>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean SearchImageOnWeb/<LoadImage>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 SearchImageOnWeb/<LoadImage>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U3CwwwU3E__0_1)); }
	inline WWW_t3688466362 * get_U3CwwwU3E__0_1() const { return ___U3CwwwU3E__0_1; }
	inline WWW_t3688466362 ** get_address_of_U3CwwwU3E__0_1() { return &___U3CwwwU3E__0_1; }
	inline void set_U3CwwwU3E__0_1(WWW_t3688466362 * value)
	{
		___U3CwwwU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CtextureU3E__0_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U3CtextureU3E__0_2)); }
	inline Texture2D_t3840446185 * get_U3CtextureU3E__0_2() const { return ___U3CtextureU3E__0_2; }
	inline Texture2D_t3840446185 ** get_address_of_U3CtextureU3E__0_2() { return &___U3CtextureU3E__0_2; }
	inline void set_U3CtextureU3E__0_2(Texture2D_t3840446185 * value)
	{
		___U3CtextureU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextureU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CrectU3E__0_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U3CrectU3E__0_3)); }
	inline Rect_t2360479859  get_U3CrectU3E__0_3() const { return ___U3CrectU3E__0_3; }
	inline Rect_t2360479859 * get_address_of_U3CrectU3E__0_3() { return &___U3CrectU3E__0_3; }
	inline void set_U3CrectU3E__0_3(Rect_t2360479859  value)
	{
		___U3CrectU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CspriteU3E__0_4() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U3CspriteU3E__0_4)); }
	inline Sprite_t280657092 * get_U3CspriteU3E__0_4() const { return ___U3CspriteU3E__0_4; }
	inline Sprite_t280657092 ** get_address_of_U3CspriteU3E__0_4() { return &___U3CspriteU3E__0_4; }
	inline void set_U3CspriteU3E__0_4(Sprite_t280657092 * value)
	{
		___U3CspriteU3E__0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CspriteU3E__0_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U24this_5)); }
	inline SearchImageOnWeb_t2767873780 * get_U24this_5() const { return ___U24this_5; }
	inline SearchImageOnWeb_t2767873780 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(SearchImageOnWeb_t2767873780 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ec__Iterator1_t1052931369, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADIMAGEU3EC__ITERATOR1_T1052931369_H
#ifndef CURSORTYPE_T2478610415_H
#define CURSORTYPE_T2478610415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetCursorOnHover/CursorType
struct  CursorType_t2478610415 
{
public:
	// System.Int32 SetCursorOnHover/CursorType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorType_t2478610415, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSORTYPE_T2478610415_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef OBJECTEVENT3_T1421126613_H
#define OBJECTEVENT3_T1421126613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoenenGames.EightBeatMan.StageEvent/ObjectEvent3
struct  ObjectEvent3_t1421126613  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEVENT3_T1421126613_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ACTIVATABLEOUTLINE_T3903301724_H
#define ACTIVATABLEOUTLINE_T3903301724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ActivatableOutline
struct  ActivatableOutline_t3903301724  : public MonoBehaviour_t3962482529
{
public:
	// Outline ActivatableOutline::myOutlineScript
	Outline_t3665521661 * ___myOutlineScript_4;

public:
	inline static int32_t get_offset_of_myOutlineScript_4() { return static_cast<int32_t>(offsetof(ActivatableOutline_t3903301724, ___myOutlineScript_4)); }
	inline Outline_t3665521661 * get_myOutlineScript_4() const { return ___myOutlineScript_4; }
	inline Outline_t3665521661 ** get_address_of_myOutlineScript_4() { return &___myOutlineScript_4; }
	inline void set_myOutlineScript_4(Outline_t3665521661 * value)
	{
		___myOutlineScript_4 = value;
		Il2CppCodeGenWriteBarrier((&___myOutlineScript_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATABLEOUTLINE_T3903301724_H
#ifndef CLOUDINARY_T3640904147_H
#define CLOUDINARY_T3640904147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cloudinary
struct  Cloudinary_t3640904147  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOUDINARY_T3640904147_H
#ifndef CURSORCONTROLLER_T2729002957_H
#define CURSORCONTROLLER_T2729002957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CursorController
struct  CursorController_t2729002957  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Texture2D CursorController::defaultCursor
	Texture2D_t3840446185 * ___defaultCursor_4;
	// UnityEngine.Texture2D CursorController::clickCursor
	Texture2D_t3840446185 * ___clickCursor_5;
	// UnityEngine.Texture2D CursorController::typeCursor
	Texture2D_t3840446185 * ___typeCursor_6;

public:
	inline static int32_t get_offset_of_defaultCursor_4() { return static_cast<int32_t>(offsetof(CursorController_t2729002957, ___defaultCursor_4)); }
	inline Texture2D_t3840446185 * get_defaultCursor_4() const { return ___defaultCursor_4; }
	inline Texture2D_t3840446185 ** get_address_of_defaultCursor_4() { return &___defaultCursor_4; }
	inline void set_defaultCursor_4(Texture2D_t3840446185 * value)
	{
		___defaultCursor_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCursor_4), value);
	}

	inline static int32_t get_offset_of_clickCursor_5() { return static_cast<int32_t>(offsetof(CursorController_t2729002957, ___clickCursor_5)); }
	inline Texture2D_t3840446185 * get_clickCursor_5() const { return ___clickCursor_5; }
	inline Texture2D_t3840446185 ** get_address_of_clickCursor_5() { return &___clickCursor_5; }
	inline void set_clickCursor_5(Texture2D_t3840446185 * value)
	{
		___clickCursor_5 = value;
		Il2CppCodeGenWriteBarrier((&___clickCursor_5), value);
	}

	inline static int32_t get_offset_of_typeCursor_6() { return static_cast<int32_t>(offsetof(CursorController_t2729002957, ___typeCursor_6)); }
	inline Texture2D_t3840446185 * get_typeCursor_6() const { return ___typeCursor_6; }
	inline Texture2D_t3840446185 ** get_address_of_typeCursor_6() { return &___typeCursor_6; }
	inline void set_typeCursor_6(Texture2D_t3840446185 * value)
	{
		___typeCursor_6 = value;
		Il2CppCodeGenWriteBarrier((&___typeCursor_6), value);
	}
};

struct CursorController_t2729002957_StaticFields
{
public:
	// CursorController CursorController::instance
	CursorController_t2729002957 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(CursorController_t2729002957_StaticFields, ___instance_7)); }
	inline CursorController_t2729002957 * get_instance_7() const { return ___instance_7; }
	inline CursorController_t2729002957 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(CursorController_t2729002957 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((&___instance_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSORCONTROLLER_T2729002957_H
#ifndef FOLLOWCAMERACANVAS_T1297221826_H
#define FOLLOWCAMERACANVAS_T1297221826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowCameraCanvas
struct  FollowCameraCanvas_t1297221826  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera FollowCameraCanvas::cam
	Camera_t4157153871 * ___cam_4;

public:
	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(FollowCameraCanvas_t1297221826, ___cam_4)); }
	inline Camera_t4157153871 * get_cam_4() const { return ___cam_4; }
	inline Camera_t4157153871 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t4157153871 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWCAMERACANVAS_T1297221826_H
#ifndef GOTOSCENEBUTTON_T2032404599_H
#define GOTOSCENEBUTTON_T2032404599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoToSceneButton
struct  GoToSceneButton_t2032404599  : public MonoBehaviour_t3962482529
{
public:
	// System.String GoToSceneButton::sceneToLoadName
	String_t* ___sceneToLoadName_4;

public:
	inline static int32_t get_offset_of_sceneToLoadName_4() { return static_cast<int32_t>(offsetof(GoToSceneButton_t2032404599, ___sceneToLoadName_4)); }
	inline String_t* get_sceneToLoadName_4() const { return ___sceneToLoadName_4; }
	inline String_t** get_address_of_sceneToLoadName_4() { return &___sceneToLoadName_4; }
	inline void set_sceneToLoadName_4(String_t* value)
	{
		___sceneToLoadName_4 = value;
		Il2CppCodeGenWriteBarrier((&___sceneToLoadName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOTOSCENEBUTTON_T2032404599_H
#ifndef GOTOURLBUTTON_T4172313867_H
#define GOTOURLBUTTON_T4172313867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoToUrlButton
struct  GoToUrlButton_t4172313867  : public MonoBehaviour_t3962482529
{
public:
	// System.String GoToUrlButton::urlToCall
	String_t* ___urlToCall_4;

public:
	inline static int32_t get_offset_of_urlToCall_4() { return static_cast<int32_t>(offsetof(GoToUrlButton_t4172313867, ___urlToCall_4)); }
	inline String_t* get_urlToCall_4() const { return ___urlToCall_4; }
	inline String_t** get_address_of_urlToCall_4() { return &___urlToCall_4; }
	inline void set_urlToCall_4(String_t* value)
	{
		___urlToCall_4 = value;
		Il2CppCodeGenWriteBarrier((&___urlToCall_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOTOURLBUTTON_T4172313867_H
#ifndef LIGHTCONTROL_T1213307469_H
#define LIGHTCONTROL_T1213307469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightControl
struct  LightControl_t1213307469  : public MonoBehaviour_t3962482529
{
public:
	// System.Single LightControl::nRand
	float ___nRand_4;

public:
	inline static int32_t get_offset_of_nRand_4() { return static_cast<int32_t>(offsetof(LightControl_t1213307469, ___nRand_4)); }
	inline float get_nRand_4() const { return ___nRand_4; }
	inline float* get_address_of_nRand_4() { return &___nRand_4; }
	inline void set_nRand_4(float value)
	{
		___nRand_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTCONTROL_T1213307469_H
#ifndef LOADIMAGEFROMURL_T3480280544_H
#define LOADIMAGEFROMURL_T3480280544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadImageFromURL
struct  LoadImageFromURL_t3480280544  : public MonoBehaviour_t3962482529
{
public:
	// System.String LoadImageFromURL::url
	String_t* ___url_4;

public:
	inline static int32_t get_offset_of_url_4() { return static_cast<int32_t>(offsetof(LoadImageFromURL_t3480280544, ___url_4)); }
	inline String_t* get_url_4() const { return ___url_4; }
	inline String_t** get_address_of_url_4() { return &___url_4; }
	inline void set_url_4(String_t* value)
	{
		___url_4 = value;
		Il2CppCodeGenWriteBarrier((&___url_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADIMAGEFROMURL_T3480280544_H
#ifndef AUDIOSOURCEHANDLER_T251114482_H
#define AUDIOSOURCEHANDLER_T251114482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoenenGames.EightBeatMan.AudioSourceHandler
struct  AudioSourceHandler_t251114482  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean MoenenGames.EightBeatMan.AudioSourceHandler::m_PlayOnStart
	bool ___m_PlayOnStart_4;
	// System.Single MoenenGames.EightBeatMan.AudioSourceHandler::m_RandomPitchMin
	float ___m_RandomPitchMin_5;
	// System.Single MoenenGames.EightBeatMan.AudioSourceHandler::m_RandomPitchMax
	float ___m_RandomPitchMax_6;
	// System.Single MoenenGames.EightBeatMan.AudioSourceHandler::m_RandomVolumeMin
	float ___m_RandomVolumeMin_7;
	// System.Single MoenenGames.EightBeatMan.AudioSourceHandler::m_RandomVolumeMax
	float ___m_RandomVolumeMax_8;
	// UnityEngine.AudioSource MoenenGames.EightBeatMan.AudioSourceHandler::m_Source
	AudioSource_t3935305588 * ___m_Source_9;

public:
	inline static int32_t get_offset_of_m_PlayOnStart_4() { return static_cast<int32_t>(offsetof(AudioSourceHandler_t251114482, ___m_PlayOnStart_4)); }
	inline bool get_m_PlayOnStart_4() const { return ___m_PlayOnStart_4; }
	inline bool* get_address_of_m_PlayOnStart_4() { return &___m_PlayOnStart_4; }
	inline void set_m_PlayOnStart_4(bool value)
	{
		___m_PlayOnStart_4 = value;
	}

	inline static int32_t get_offset_of_m_RandomPitchMin_5() { return static_cast<int32_t>(offsetof(AudioSourceHandler_t251114482, ___m_RandomPitchMin_5)); }
	inline float get_m_RandomPitchMin_5() const { return ___m_RandomPitchMin_5; }
	inline float* get_address_of_m_RandomPitchMin_5() { return &___m_RandomPitchMin_5; }
	inline void set_m_RandomPitchMin_5(float value)
	{
		___m_RandomPitchMin_5 = value;
	}

	inline static int32_t get_offset_of_m_RandomPitchMax_6() { return static_cast<int32_t>(offsetof(AudioSourceHandler_t251114482, ___m_RandomPitchMax_6)); }
	inline float get_m_RandomPitchMax_6() const { return ___m_RandomPitchMax_6; }
	inline float* get_address_of_m_RandomPitchMax_6() { return &___m_RandomPitchMax_6; }
	inline void set_m_RandomPitchMax_6(float value)
	{
		___m_RandomPitchMax_6 = value;
	}

	inline static int32_t get_offset_of_m_RandomVolumeMin_7() { return static_cast<int32_t>(offsetof(AudioSourceHandler_t251114482, ___m_RandomVolumeMin_7)); }
	inline float get_m_RandomVolumeMin_7() const { return ___m_RandomVolumeMin_7; }
	inline float* get_address_of_m_RandomVolumeMin_7() { return &___m_RandomVolumeMin_7; }
	inline void set_m_RandomVolumeMin_7(float value)
	{
		___m_RandomVolumeMin_7 = value;
	}

	inline static int32_t get_offset_of_m_RandomVolumeMax_8() { return static_cast<int32_t>(offsetof(AudioSourceHandler_t251114482, ___m_RandomVolumeMax_8)); }
	inline float get_m_RandomVolumeMax_8() const { return ___m_RandomVolumeMax_8; }
	inline float* get_address_of_m_RandomVolumeMax_8() { return &___m_RandomVolumeMax_8; }
	inline void set_m_RandomVolumeMax_8(float value)
	{
		___m_RandomVolumeMax_8 = value;
	}

	inline static int32_t get_offset_of_m_Source_9() { return static_cast<int32_t>(offsetof(AudioSourceHandler_t251114482, ___m_Source_9)); }
	inline AudioSource_t3935305588 * get_m_Source_9() const { return ___m_Source_9; }
	inline AudioSource_t3935305588 ** get_address_of_m_Source_9() { return &___m_Source_9; }
	inline void set_m_Source_9(AudioSource_t3935305588 * value)
	{
		___m_Source_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Source_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCEHANDLER_T251114482_H
#ifndef COLLIDER2DHANDLER_T3083985837_H
#define COLLIDER2DHANDLER_T3083985837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoenenGames.EightBeatMan.Collider2DHandler
struct  Collider2DHandler_t3083985837  : public MonoBehaviour_t3962482529
{
public:
	// MoenenGames.EightBeatMan.TransformTransformEvent MoenenGames.EightBeatMan.Collider2DHandler::m_OnTriggerStay
	TransformTransformEvent_t3721692317 * ___m_OnTriggerStay_4;

public:
	inline static int32_t get_offset_of_m_OnTriggerStay_4() { return static_cast<int32_t>(offsetof(Collider2DHandler_t3083985837, ___m_OnTriggerStay_4)); }
	inline TransformTransformEvent_t3721692317 * get_m_OnTriggerStay_4() const { return ___m_OnTriggerStay_4; }
	inline TransformTransformEvent_t3721692317 ** get_address_of_m_OnTriggerStay_4() { return &___m_OnTriggerStay_4; }
	inline void set_m_OnTriggerStay_4(TransformTransformEvent_t3721692317 * value)
	{
		___m_OnTriggerStay_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnTriggerStay_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2DHANDLER_T3083985837_H
#ifndef OBJECTLOADSCENEONCLICK_T2018356012_H
#define OBJECTLOADSCENEONCLICK_T2018356012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectLoadSceneOnClick
struct  ObjectLoadSceneOnClick_t2018356012  : public MonoBehaviour_t3962482529
{
public:
	// System.String ObjectLoadSceneOnClick::sceneToLoadName
	String_t* ___sceneToLoadName_4;

public:
	inline static int32_t get_offset_of_sceneToLoadName_4() { return static_cast<int32_t>(offsetof(ObjectLoadSceneOnClick_t2018356012, ___sceneToLoadName_4)); }
	inline String_t* get_sceneToLoadName_4() const { return ___sceneToLoadName_4; }
	inline String_t** get_address_of_sceneToLoadName_4() { return &___sceneToLoadName_4; }
	inline void set_sceneToLoadName_4(String_t* value)
	{
		___sceneToLoadName_4 = value;
		Il2CppCodeGenWriteBarrier((&___sceneToLoadName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTLOADSCENEONCLICK_T2018356012_H
#ifndef OBJECTLOADURLONCLICK_T1967539839_H
#define OBJECTLOADURLONCLICK_T1967539839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectLoadURLOnClick
struct  ObjectLoadURLOnClick_t1967539839  : public MonoBehaviour_t3962482529
{
public:
	// System.String ObjectLoadURLOnClick::urlToCall
	String_t* ___urlToCall_4;

public:
	inline static int32_t get_offset_of_urlToCall_4() { return static_cast<int32_t>(offsetof(ObjectLoadURLOnClick_t1967539839, ___urlToCall_4)); }
	inline String_t* get_urlToCall_4() const { return ___urlToCall_4; }
	inline String_t** get_address_of_urlToCall_4() { return &___urlToCall_4; }
	inline void set_urlToCall_4(String_t* value)
	{
		___urlToCall_4 = value;
		Il2CppCodeGenWriteBarrier((&___urlToCall_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTLOADURLONCLICK_T1967539839_H
#ifndef SEARCHIMAGEONWEB_T2767873780_H
#define SEARCHIMAGEONWEB_T2767873780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchImageOnWeb
struct  SearchImageOnWeb_t2767873780  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.InputField SearchImageOnWeb::m_searchField
	InputField_t3762917431 * ___m_searchField_4;
	// UIMessage SearchImageOnWeb::m_message_error
	UIMessage_t2721655451 * ___m_message_error_5;
	// UnityEngine.UI.Image SearchImageOnWeb::m_imageTo
	Image_t2670269651 * ___m_imageTo_6;
	// UnityEngine.UI.Button SearchImageOnWeb::m_searchButton
	Button_t4055032469 * ___m_searchButton_7;
	// System.String SearchImageOnWeb::m_apiKey
	String_t* ___m_apiKey_8;

public:
	inline static int32_t get_offset_of_m_searchField_4() { return static_cast<int32_t>(offsetof(SearchImageOnWeb_t2767873780, ___m_searchField_4)); }
	inline InputField_t3762917431 * get_m_searchField_4() const { return ___m_searchField_4; }
	inline InputField_t3762917431 ** get_address_of_m_searchField_4() { return &___m_searchField_4; }
	inline void set_m_searchField_4(InputField_t3762917431 * value)
	{
		___m_searchField_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_searchField_4), value);
	}

	inline static int32_t get_offset_of_m_message_error_5() { return static_cast<int32_t>(offsetof(SearchImageOnWeb_t2767873780, ___m_message_error_5)); }
	inline UIMessage_t2721655451 * get_m_message_error_5() const { return ___m_message_error_5; }
	inline UIMessage_t2721655451 ** get_address_of_m_message_error_5() { return &___m_message_error_5; }
	inline void set_m_message_error_5(UIMessage_t2721655451 * value)
	{
		___m_message_error_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_message_error_5), value);
	}

	inline static int32_t get_offset_of_m_imageTo_6() { return static_cast<int32_t>(offsetof(SearchImageOnWeb_t2767873780, ___m_imageTo_6)); }
	inline Image_t2670269651 * get_m_imageTo_6() const { return ___m_imageTo_6; }
	inline Image_t2670269651 ** get_address_of_m_imageTo_6() { return &___m_imageTo_6; }
	inline void set_m_imageTo_6(Image_t2670269651 * value)
	{
		___m_imageTo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_imageTo_6), value);
	}

	inline static int32_t get_offset_of_m_searchButton_7() { return static_cast<int32_t>(offsetof(SearchImageOnWeb_t2767873780, ___m_searchButton_7)); }
	inline Button_t4055032469 * get_m_searchButton_7() const { return ___m_searchButton_7; }
	inline Button_t4055032469 ** get_address_of_m_searchButton_7() { return &___m_searchButton_7; }
	inline void set_m_searchButton_7(Button_t4055032469 * value)
	{
		___m_searchButton_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_searchButton_7), value);
	}

	inline static int32_t get_offset_of_m_apiKey_8() { return static_cast<int32_t>(offsetof(SearchImageOnWeb_t2767873780, ___m_apiKey_8)); }
	inline String_t* get_m_apiKey_8() const { return ___m_apiKey_8; }
	inline String_t** get_address_of_m_apiKey_8() { return &___m_apiKey_8; }
	inline void set_m_apiKey_8(String_t* value)
	{
		___m_apiKey_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_apiKey_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEARCHIMAGEONWEB_T2767873780_H
#ifndef SETCURSORONHOVER_T2633846865_H
#define SETCURSORONHOVER_T2633846865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetCursorOnHover
struct  SetCursorOnHover_t2633846865  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject SetCursorOnHover::imageToEnable
	GameObject_t1113636619 * ___imageToEnable_4;
	// SetCursorOnHover/CursorType SetCursorOnHover::cursorSelected
	int32_t ___cursorSelected_5;

public:
	inline static int32_t get_offset_of_imageToEnable_4() { return static_cast<int32_t>(offsetof(SetCursorOnHover_t2633846865, ___imageToEnable_4)); }
	inline GameObject_t1113636619 * get_imageToEnable_4() const { return ___imageToEnable_4; }
	inline GameObject_t1113636619 ** get_address_of_imageToEnable_4() { return &___imageToEnable_4; }
	inline void set_imageToEnable_4(GameObject_t1113636619 * value)
	{
		___imageToEnable_4 = value;
		Il2CppCodeGenWriteBarrier((&___imageToEnable_4), value);
	}

	inline static int32_t get_offset_of_cursorSelected_5() { return static_cast<int32_t>(offsetof(SetCursorOnHover_t2633846865, ___cursorSelected_5)); }
	inline int32_t get_cursorSelected_5() const { return ___cursorSelected_5; }
	inline int32_t* get_address_of_cursorSelected_5() { return &___cursorSelected_5; }
	inline void set_cursorSelected_5(int32_t value)
	{
		___cursorSelected_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETCURSORONHOVER_T2633846865_H
#ifndef UIMESSAGE_T2721655451_H
#define UIMESSAGE_T2721655451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIMessage
struct  UIMessage_t2721655451  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text UIMessage::m_text
	Text_t1901882714 * ___m_text_4;

public:
	inline static int32_t get_offset_of_m_text_4() { return static_cast<int32_t>(offsetof(UIMessage_t2721655451, ___m_text_4)); }
	inline Text_t1901882714 * get_m_text_4() const { return ___m_text_4; }
	inline Text_t1901882714 ** get_address_of_m_text_4() { return &___m_text_4; }
	inline void set_m_text_4(Text_t1901882714 * value)
	{
		___m_text_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIMESSAGE_T2721655451_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (ObjectEvent3_t1421126613), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (AudioSourceHandler_t251114482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2101[6] = 
{
	AudioSourceHandler_t251114482::get_offset_of_m_PlayOnStart_4(),
	AudioSourceHandler_t251114482::get_offset_of_m_RandomPitchMin_5(),
	AudioSourceHandler_t251114482::get_offset_of_m_RandomPitchMax_6(),
	AudioSourceHandler_t251114482::get_offset_of_m_RandomVolumeMin_7(),
	AudioSourceHandler_t251114482::get_offset_of_m_RandomVolumeMax_8(),
	AudioSourceHandler_t251114482::get_offset_of_m_Source_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (Collider2DHandler_t3083985837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2102[1] = 
{
	Collider2DHandler_t3083985837::get_offset_of_m_OnTriggerStay_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (LightControl_t1213307469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2103[1] = 
{
	LightControl_t1213307469::get_offset_of_nRand_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (ActivatableOutline_t3903301724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2104[1] = 
{
	ActivatableOutline_t3903301724::get_offset_of_myOutlineScript_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (Cloudinary_t3640904147), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (CursorController_t2729002957), -1, sizeof(CursorController_t2729002957_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2106[4] = 
{
	CursorController_t2729002957::get_offset_of_defaultCursor_4(),
	CursorController_t2729002957::get_offset_of_clickCursor_5(),
	CursorController_t2729002957::get_offset_of_typeCursor_6(),
	CursorController_t2729002957_StaticFields::get_offset_of_instance_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (FollowCameraCanvas_t1297221826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2107[1] = 
{
	FollowCameraCanvas_t1297221826::get_offset_of_cam_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (GoToSceneButton_t2032404599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2108[1] = 
{
	GoToSceneButton_t2032404599::get_offset_of_sceneToLoadName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (GoToUrlButton_t4172313867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2109[1] = 
{
	GoToUrlButton_t4172313867::get_offset_of_urlToCall_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (LoadImageFromURL_t3480280544), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2110[1] = 
{
	LoadImageFromURL_t3480280544::get_offset_of_url_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (U3CStartU3Ec__Iterator0_t3043381165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2111[8] = 
{
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U3CwwwU3E__0_0(),
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U3CtextureU3E__0_1(),
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U3CrectU3E__0_2(),
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U3CspriteU3E__0_3(),
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U24this_4(),
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U24current_5(),
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U24disposing_6(),
	U3CStartU3Ec__Iterator0_t3043381165::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (Json_t27535148), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (Parser_t3021620180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2113[2] = 
{
	0,
	Parser_t3021620180::get_offset_of_json_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (TOKEN_t3126366611)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2114[13] = 
{
	TOKEN_t3126366611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (Serializer_t1539586466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2115[1] = 
{
	Serializer_t1539586466::get_offset_of_builder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (ObjectLoadSceneOnClick_t2018356012), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2116[1] = 
{
	ObjectLoadSceneOnClick_t2018356012::get_offset_of_sceneToLoadName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (ObjectLoadURLOnClick_t1967539839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2117[1] = 
{
	ObjectLoadURLOnClick_t1967539839::get_offset_of_urlToCall_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (SearchImageOnWeb_t2767873780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2118[5] = 
{
	SearchImageOnWeb_t2767873780::get_offset_of_m_searchField_4(),
	SearchImageOnWeb_t2767873780::get_offset_of_m_message_error_5(),
	SearchImageOnWeb_t2767873780::get_offset_of_m_imageTo_6(),
	SearchImageOnWeb_t2767873780::get_offset_of_m_searchButton_7(),
	SearchImageOnWeb_t2767873780::get_offset_of_m_apiKey_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (U3CSearchU3Ec__Iterator0_t4139289244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2119[5] = 
{
	U3CSearchU3Ec__Iterator0_t4139289244::get_offset_of_U3CwwwU3E__1_0(),
	U3CSearchU3Ec__Iterator0_t4139289244::get_offset_of_U24this_1(),
	U3CSearchU3Ec__Iterator0_t4139289244::get_offset_of_U24current_2(),
	U3CSearchU3Ec__Iterator0_t4139289244::get_offset_of_U24disposing_3(),
	U3CSearchU3Ec__Iterator0_t4139289244::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (U3CLoadImageU3Ec__Iterator1_t1052931369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2120[9] = 
{
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_url_0(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U3CwwwU3E__0_1(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U3CtextureU3E__0_2(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U3CrectU3E__0_3(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U3CspriteU3E__0_4(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U24this_5(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U24current_6(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U24disposing_7(),
	U3CLoadImageU3Ec__Iterator1_t1052931369::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (SetCursorOnHover_t2633846865), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2121[2] = 
{
	SetCursorOnHover_t2633846865::get_offset_of_imageToEnable_4(),
	SetCursorOnHover_t2633846865::get_offset_of_cursorSelected_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (CursorType_t2478610415)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2122[4] = 
{
	CursorType_t2478610415::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (UIMessage_t2721655451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2123[1] = 
{
	UIMessage_t2721655451::get_offset_of_m_text_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
