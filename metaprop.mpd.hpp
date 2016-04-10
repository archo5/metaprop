
#include "mpd_api.hpp"

struct StdString_MPD : struct_MPD<StdString_MPD>
{
	typedef std::string type;

	static const char* name(){ return "StdString"; }
	static const StdString_MPD* inst(){ static const StdString_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 2; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( std::string const*, int );
	static bool setprop( std::string*, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ static const mpd_TypeInfo types[] = { { "int32_t", mpdt_Int32, 0 }, { "int8_t", mpdt_Int8, 0 } }; return types; }
	static mpd_Variant getindex( std::string const*, const mpd_Variant& );
	static bool setindex( std::string*, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(std::string) );
};

MPD_DUMPDATA_WRAPPER(StdString, std::string);
template<> struct mpd_MetaType<std::string > : StdString_MPD {};
template<> struct mpd_MetaType<std::string const> : StdString_MPD {};
template<> struct mpd_MetaType<StdString_MPD> : StdString_MPD {};

struct Vec2_MPD : struct_MPD<Vec2_MPD>
{
	typedef Vec2 type;

	static const char* name(){ return "Vec2"; }
	static const Vec2_MPD* inst(){ static const Vec2_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 2; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( Vec2 const*, int );
	static bool setprop( Vec2*, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( Vec2 const*, const mpd_Variant& );
	static bool setindex( Vec2*, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(Vec2) );
};

MPD_DUMPDATA_WRAPPER(Vec2, Vec2);
template<> struct mpd_MetaType<Vec2 > : Vec2_MPD {};
template<> struct mpd_MetaType<Vec2 const> : Vec2_MPD {};
template<> struct mpd_MetaType<Vec2_MPD> : Vec2_MPD {};

struct AABB2_MPD : struct_MPD<AABB2_MPD>
{
	typedef AABB2 type;

	static const char* name(){ return "AABB2"; }
	static const AABB2_MPD* inst(){ static const AABB2_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 2; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( AABB2 const*, int );
	static bool setprop( AABB2*, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( AABB2 const*, const mpd_Variant& );
	static bool setindex( AABB2*, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(AABB2) );
};

MPD_DUMPDATA_WRAPPER(AABB2, AABB2);
template<> struct mpd_MetaType<AABB2 > : AABB2_MPD {};
template<> struct mpd_MetaType<AABB2 const> : AABB2_MPD {};
template<> struct mpd_MetaType<AABB2_MPD> : AABB2_MPD {};

struct Vec2Ptr_MPD : struct_MPD<Vec2Ptr_MPD>
{
	typedef Vec2* type;

	static const char* name(){ return "Vec2Ptr"; }
	static const Vec2Ptr_MPD* inst(){ static const Vec2Ptr_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 0; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( Vec2* const*, int );
	static bool setprop( Vec2**, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( Vec2* const*, const mpd_Variant& );
	static bool setindex( Vec2**, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(Vec2*) );
};

MPD_DUMPDATA_WRAPPER(Vec2Ptr, Vec2*);
template<> struct mpd_MetaType<UnHandle<Vec2> > : Vec2Ptr_MPD {};
template<> struct mpd_MetaType<UnHandle<Vec2> const> : Vec2Ptr_MPD {};
template<> struct mpd_MetaType<Vec2* > : Vec2Ptr_MPD {};
template<> struct mpd_MetaType<Vec2* const> : Vec2Ptr_MPD {};
template<> struct mpd_MetaType<Vec2Ptr_MPD> : Vec2Ptr_MPD {};

struct PosType_MPD : struct_MPD<PosType_MPD>
{
	typedef PosType type;

	static const char* name(){ return "PosType"; }
	static const PosType_MPD* inst(){ static const PosType_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 0; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( PosType const*, int );
	static bool setprop( PosType*, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( PosType const*, const mpd_Variant& );
	static bool setindex( PosType*, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 3; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(PosType) );
};

MPD_DUMPDATA_WRAPPER(PosType, PosType);
template<> struct mpd_MetaType<PosType > : PosType_MPD {};
template<> struct mpd_MetaType<PosType const> : PosType_MPD {};
template<> struct mpd_MetaType<PosType_MPD> : PosType_MPD {};

struct OptPos_MPD : struct_MPD<OptPos_MPD>
{
	typedef OptPos type;

	static const char* name(){ return "OptPos"; }
	static const OptPos_MPD* inst(){ static const OptPos_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 5; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( OptPos const*, int );
	static bool setprop( OptPos*, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( OptPos const*, const mpd_Variant& );
	static bool setindex( OptPos*, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(OptPos) );
};

MPD_DUMPDATA_WRAPPER(OptPos, OptPos);
template<> struct mpd_MetaType<OptPos > : OptPos_MPD {};
template<> struct mpd_MetaType<OptPos const> : OptPos_MPD {};
template<> struct mpd_MetaType<OptPos_MPD> : OptPos_MPD {};

struct Node_MPD : struct_MPD<Node_MPD>
{
	typedef Node type;

	static const char* name(){ return "Node"; }
	static const Node_MPD* inst(){ static const Node_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 2; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( Node const*, int );
	static bool setprop( Node*, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( Node const*, const mpd_Variant& );
	static bool setindex( Node*, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(Node) );
};

MPD_DUMPDATA_WRAPPER(Node, Node);
template<> struct mpd_MetaType<Node > : Node_MPD {};
template<> struct mpd_MetaType<Node const> : Node_MPD {};
template<> struct mpd_MetaType<Node_MPD> : Node_MPD {};

struct NodePtr_MPD : struct_MPD<NodePtr_MPD>
{
	typedef Node* type;

	static const char* name(){ return "NodePtr"; }
	static const NodePtr_MPD* inst(){ static const NodePtr_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 0; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( Node* const*, int );
	static bool setprop( Node**, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( Node* const*, const mpd_Variant& );
	static bool setindex( Node**, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(Node*) );
};

MPD_DUMPDATA_WRAPPER(NodePtr, Node*);
template<> struct mpd_MetaType<NodeHandle > : NodePtr_MPD {};
template<> struct mpd_MetaType<NodeHandle const> : NodePtr_MPD {};
template<> struct mpd_MetaType<Node* > : NodePtr_MPD {};
template<> struct mpd_MetaType<Node* const> : NodePtr_MPD {};
template<> struct mpd_MetaType<NodePtr_MPD> : NodePtr_MPD {};

struct NodeOptPos_MPD : struct_MPD<NodeOptPos_MPD>
{
	typedef NodeOptPos type;

	static const char* name(){ return "NodeOptPos"; }
	static const NodeOptPos_MPD* inst(){ static const NodeOptPos_MPD mpd; return &mpd; }
	static const mpd_KeyValue* metadata();

	static int propcount(){ return 2; }
	static const mpd_PropInfo* props();
	static mpd_Variant getprop( NodeOptPos const*, int );
	static bool setprop( NodeOptPos*, int, const mpd_Variant& );

	static const mpd_TypeInfo* indextypes(){ return 0; }
	static mpd_Variant getindex( NodeOptPos const*, const mpd_Variant& );
	static bool setindex( NodeOptPos*, const mpd_Variant&, const mpd_Variant& );

	static int valuecount(){ return 0; }
	static const mpd_EnumValue* values();

	static void dump( MPD_STATICDUMP_ARGS(NodeOptPos) );
};

MPD_DUMPDATA_WRAPPER(NodeOptPos, NodeOptPos);
template<> struct mpd_MetaType<NodeOptPos > : NodeOptPos_MPD {};
template<> struct mpd_MetaType<NodeOptPos const> : NodeOptPos_MPD {};
template<> struct mpd_MetaType<NodeOptPos_MPD> : NodeOptPos_MPD {};


const mpd_KeyValue* StdString_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* StdString_MPD::props()
{
	static const mpd_KeyValue data_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue size_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_PropInfo data[] =
	{
		{ "data", 4, { "mpd_StringView", mpdt_ConstString, 0 }, data_metadata },
		{ "size", 4, { "int32_t", mpdt_Int32, 0 }, size_metadata },
		{ 0, 0, { 0, mpdt_None, 0 }, 0 },
	};
	return data;
}
mpd_Variant StdString_MPD::getprop( std::string const* obj, int prop )
{
	switch( prop )
	{
	case 0: return (mpd_StringView const&) mpd_StringView::create(obj->c_str(), obj->size());
	case 1: return (int32_t const&) obj->size();
	default: return mpd_Variant();
	}
}
bool StdString_MPD::setprop( std::string* obj, int prop, const mpd_Variant& val )
{
	switch( prop )
	{
	case 0: obj->assign(val.get_stringview().str, val.get_stringview().size); return true;
	case 1: obj->resize(val.get_int32()); return true;
	default: return false;
	}
}
mpd_Variant StdString_MPD::getindex( std::string const* obj, const mpd_Variant& key )
{
	return (int8_t const&)(*(obj))[mpd_var_get<int32_t >(key)];
}
bool StdString_MPD::setindex( std::string* obj, const mpd_Variant& key, const mpd_Variant& val )
{
	(*(obj))[mpd_var_get<int32_t >(key)] = mpd_var_get<int8_t >(val);
	return true;
}
const mpd_EnumValue* StdString_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void StdString_MPD::dump( MPD_STATICDUMP_ARGS(std::string) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "struct StdString\n" );
	MPD_DUMPLEV( 0 ); printf( "{\n" );
	if( level < limit )
	{
		MPD_DUMP_PROP( mpd_StringView, data, mpd_StringView::create(pdata->c_str(), pdata->size()) );
		MPD_DUMP_PROP( int32_t, size, pdata->size() );
	}
	else
	{
		MPD_DUMPLEV( 1 ); printf( "...\n" );
	}
	MPD_DUMPLEV( 0 ); printf( "}" );
}

const mpd_KeyValue* Vec2_MPD::metadata()
{
	static const mpd_KeyValue data[] =
	{
		{ "type", 4, "mathtype/vec2", 13, 0, (float) 0 },
		{ "edit", 4, "normal", 6, 0, (float) 0 },
		{ 0, 0, 0, 0, 0, 0 }
	};
	return data;
}
const mpd_PropInfo* Vec2_MPD::props()
{
	static const mpd_KeyValue x_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue y_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_PropInfo data[] =
	{
		{ "x", 1, { "float", mpdt_Float32, 0 }, x_metadata },
		{ "y", 1, { "float", mpdt_Float32, 0 }, y_metadata },
		{ 0, 0, { 0, mpdt_None, 0 }, 0 },
	};
	return data;
}
mpd_Variant Vec2_MPD::getprop( Vec2 const* obj, int prop )
{
	switch( prop )
	{
	case 0: return (float const&) obj->x;
	case 1: return (float const&) obj->y;
	default: return mpd_Variant();
	}
}
bool Vec2_MPD::setprop( Vec2* obj, int prop, const mpd_Variant& val )
{
	switch( prop )
	{
	case 0: obj->x = mpd_var_get<float >(val); return true;
	case 1: obj->y = mpd_var_get<float >(val); return true;
	default: return false;
	}
}
mpd_Variant Vec2_MPD::getindex( Vec2 const*, const mpd_Variant& ){ return mpd_Variant(); }
bool Vec2_MPD::setindex( Vec2*, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* Vec2_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void Vec2_MPD::dump( MPD_STATICDUMP_ARGS(Vec2) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "struct Vec2\n" );
	MPD_DUMPLEV( 0 ); printf( "{\n" );
	if( level < limit )
	{
		MPD_DUMP_PROP( float, x, pdata->x );
		MPD_DUMP_PROP( float, y, pdata->y );
	}
	else
	{
		MPD_DUMPLEV( 1 ); printf( "...\n" );
	}
	MPD_DUMPLEV( 0 ); printf( "}" );
}

const mpd_KeyValue* AABB2_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* AABB2_MPD::props()
{
	static const mpd_KeyValue pmin_metadata[] =
	{
		{ "x/min", 5, "-1000", 5, -1000, (float) -1000 },
		{ "x/max", 5, "1000", 4, 1000, (float) 1000 },
		{ "y/min", 5, "-1000", 5, -1000, (float) -1000 },
		{ "y/max", 5, "1000", 4, 1000, (float) 1000 },
		{ 0, 0, 0, 0, 0, 0 }
	};
	static const mpd_KeyValue pmax_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_PropInfo data[] =
	{
		{ "pmin", 4, { "Vec2", mpdt_Struct, Vec2_MPD::inst() }, pmin_metadata },
		{ "pmax", 4, { "Vec2", mpdt_Struct, Vec2_MPD::inst() }, pmax_metadata },
		{ 0, 0, { 0, mpdt_None, 0 }, 0 },
	};
	return data;
}
mpd_Variant AABB2_MPD::getprop( AABB2 const* obj, int prop )
{
	switch( prop )
	{
	case 0: return (Vec2 const&) obj->pmin;
	case 1: return (Vec2 const&) obj->pmax;
	default: return mpd_Variant();
	}
}
bool AABB2_MPD::setprop( AABB2* obj, int prop, const mpd_Variant& val )
{
	switch( prop )
	{
	case 0: obj->pmin = mpd_var_get<Vec2 >(val); return true;
	case 1: obj->pmax = mpd_var_get<Vec2 >(val); return true;
	default: return false;
	}
}
mpd_Variant AABB2_MPD::getindex( AABB2 const*, const mpd_Variant& ){ return mpd_Variant(); }
bool AABB2_MPD::setindex( AABB2*, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* AABB2_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void AABB2_MPD::dump( MPD_STATICDUMP_ARGS(AABB2) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "struct AABB2\n" );
	MPD_DUMPLEV( 0 ); printf( "{\n" );
	if( level < limit )
	{
		MPD_DUMP_PROP( Vec2, pmin, pdata->pmin );
		MPD_DUMP_PROP( Vec2, pmax, pdata->pmax );
	}
	else
	{
		MPD_DUMPLEV( 1 ); printf( "...\n" );
	}
	MPD_DUMPLEV( 0 ); printf( "}" );
}

const mpd_KeyValue* Vec2Ptr_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* Vec2Ptr_MPD::props(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_PropInfo none = { 0, 0, { 0, mpdt_None, 0 }, &kvnone }; return &none; }
mpd_Variant Vec2Ptr_MPD::getprop( Vec2* const*, int ){ return mpd_Variant(); }
bool Vec2Ptr_MPD::setprop( Vec2**, int, const mpd_Variant& ){ return false; }
mpd_Variant Vec2Ptr_MPD::getindex( Vec2* const*, const mpd_Variant& ){ return mpd_Variant(); }
bool Vec2Ptr_MPD::setindex( Vec2**, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* Vec2Ptr_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void Vec2Ptr_MPD::dump( MPD_STATICDUMP_ARGS(Vec2*) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "[Vec2Ptr] %s", *pdata ? "-> " : "null" );
	if( *pdata && level < limit )
		mpd_DumpData<Vec2>( **pdata, limit, level );
}

const mpd_KeyValue* PosType_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* PosType_MPD::props(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_PropInfo none = { 0, 0, { 0, mpdt_None, 0 }, &kvnone }; return &none; }
mpd_Variant PosType_MPD::getprop( PosType const*, int ){ return mpd_Variant(); }
bool PosType_MPD::setprop( PosType*, int, const mpd_Variant& ){ return false; }
mpd_Variant PosType_MPD::getindex( PosType const*, const mpd_Variant& ){ return mpd_Variant(); }
bool PosType_MPD::setindex( PosType*, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* PosType_MPD::values()
{
	static const mpd_KeyValue Unknown_metadata[] =
	{
		{ "label", 5, "!!!UNKNOWN!!!", 13, 0, (float) 0 },
		{ 0, 0, 0, 0, 0, 0 }
	};
	static const mpd_KeyValue Relative_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue Absolute_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_EnumValue data[] =
	{
		{ "Unknown", 7, Unknown, Unknown_metadata },
		{ "Relative", 8, Relative, Relative_metadata },
		{ "Absolute", 8, Absolute, Absolute_metadata },
		{ 0, 0, 0, 0 },
	};
	return data;
}
void PosType_MPD::dump( MPD_STATICDUMP_ARGS(PosType) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "PosType::%s (%d)", value2name( *pdata ), (int)*pdata );
}

const mpd_KeyValue* OptPos_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* OptPos_MPD::props()
{
	static const mpd_KeyValue type_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue ppos_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue pdir_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue pmgd_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue pmgu_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_PropInfo data[] =
	{
		{ "type", 4, { "PosType", mpdt_Enum, PosType_MPD::inst() }, type_metadata },
		{ "ppos", 4, { "Vec2Ptr", mpdt_Pointer, Vec2Ptr_MPD::inst() }, ppos_metadata },
		{ "pdir", 4, { "Vec2Ptr", mpdt_Pointer, Vec2Ptr_MPD::inst() }, pdir_metadata },
		{ "pmgd", 4, { "Vec2Ptr", mpdt_Pointer, Vec2Ptr_MPD::inst() }, pmgd_metadata },
		{ "pmgu", 4, { "Vec2Ptr", mpdt_Pointer, Vec2Ptr_MPD::inst() }, pmgu_metadata },
		{ 0, 0, { 0, mpdt_None, 0 }, 0 },
	};
	return data;
}
mpd_Variant OptPos_MPD::getprop( OptPos const* obj, int prop )
{
	switch( prop )
	{
	case 0: return (PosType const&) obj->type;
	case 1: return (Vec2* const&) obj->ppos;
	case 2: return (Vec2* const&) obj->pdir;
	case 3: return (Vec2* const&) obj->pmgd;
	case 4: return (Vec2* const&) obj->pmgu;
	default: return mpd_Variant();
	}
}
bool OptPos_MPD::setprop( OptPos* obj, int prop, const mpd_Variant& val )
{
	switch( prop )
	{
	case 0: obj->type = mpd_var_get<PosType >(val); return true;
	case 1: obj->ppos = mpd_var_get<Vec2* >(val); return true;
	case 2: obj->pdir = mpd_var_get<Vec2* >(val); return true;
	case 3: obj->pmgd = mpd_var_get<Vec2* >(val); return true;
	case 4: obj->pmgu = mpd_var_get<Vec2* >(val); return true;
	default: return false;
	}
}
mpd_Variant OptPos_MPD::getindex( OptPos const*, const mpd_Variant& ){ return mpd_Variant(); }
bool OptPos_MPD::setindex( OptPos*, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* OptPos_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void OptPos_MPD::dump( MPD_STATICDUMP_ARGS(OptPos) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "struct OptPos\n" );
	MPD_DUMPLEV( 0 ); printf( "{\n" );
	if( level < limit )
	{
		MPD_DUMP_PROP( PosType, type, pdata->type );
		MPD_DUMP_PROP( Vec2*, ppos, pdata->ppos );
		MPD_DUMP_PROP( Vec2*, pdir, pdata->pdir );
		MPD_DUMP_PROP( Vec2*, pmgd, pdata->pmgd );
		MPD_DUMP_PROP( Vec2*, pmgu, pdata->pmgu );
	}
	else
	{
		MPD_DUMPLEV( 1 ); printf( "...\n" );
	}
	MPD_DUMPLEV( 0 ); printf( "}" );
}

const mpd_KeyValue* Node_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* Node_MPD::props()
{
	static const mpd_KeyValue lft_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue rgt_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_PropInfo data[] =
	{
		{ "lft", 3, { "NodePtr", mpdt_Pointer, NodePtr_MPD::inst() }, lft_metadata },
		{ "rgt", 3, { "NodePtr", mpdt_Pointer, NodePtr_MPD::inst() }, rgt_metadata },
		{ 0, 0, { 0, mpdt_None, 0 }, 0 },
	};
	return data;
}
mpd_Variant Node_MPD::getprop( Node const* obj, int prop )
{
	switch( prop )
	{
	case 0: return (Node* const&) obj->lft;
	case 1: return (Node* const&) obj->rgt;
	default: return mpd_Variant();
	}
}
bool Node_MPD::setprop( Node* obj, int prop, const mpd_Variant& val )
{
	switch( prop )
	{
	case 0: obj->lft = mpd_var_get<Node* >(val); return true;
	case 1: obj->rgt = mpd_var_get<Node* >(val); return true;
	default: return false;
	}
}
mpd_Variant Node_MPD::getindex( Node const*, const mpd_Variant& ){ return mpd_Variant(); }
bool Node_MPD::setindex( Node*, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* Node_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void Node_MPD::dump( MPD_STATICDUMP_ARGS(Node) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "struct Node\n" );
	MPD_DUMPLEV( 0 ); printf( "{\n" );
	if( level < limit )
	{
		MPD_DUMP_PROP( Node*, lft, pdata->lft );
		MPD_DUMP_PROP( Node*, rgt, pdata->rgt );
	}
	else
	{
		MPD_DUMPLEV( 1 ); printf( "...\n" );
	}
	MPD_DUMPLEV( 0 ); printf( "}" );
}

const mpd_KeyValue* NodePtr_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* NodePtr_MPD::props(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_PropInfo none = { 0, 0, { 0, mpdt_None, 0 }, &kvnone }; return &none; }
mpd_Variant NodePtr_MPD::getprop( Node* const*, int ){ return mpd_Variant(); }
bool NodePtr_MPD::setprop( Node**, int, const mpd_Variant& ){ return false; }
mpd_Variant NodePtr_MPD::getindex( Node* const*, const mpd_Variant& ){ return mpd_Variant(); }
bool NodePtr_MPD::setindex( Node**, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* NodePtr_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void NodePtr_MPD::dump( MPD_STATICDUMP_ARGS(Node*) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "[NodePtr] %s", *pdata ? "-> " : "null" );
	if( *pdata && level < limit )
		mpd_DumpData<Node>( **pdata, limit, level );
}

const mpd_KeyValue* NodeOptPos_MPD::metadata(){ static const mpd_KeyValue none = { 0, 0, 0, 0, 0, 0 }; return &none; }
const mpd_PropInfo* NodeOptPos_MPD::props()
{
	static const mpd_KeyValue node_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_KeyValue optpos_metadata[] = { { 0, 0, 0, 0, 0, 0 } };
	static const mpd_PropInfo data[] =
	{
		{ "node", 4, { "Node", mpdt_Struct, Node_MPD::inst() }, node_metadata },
		{ "optpos", 6, { "OptPos", mpdt_Struct, OptPos_MPD::inst() }, optpos_metadata },
		{ 0, 0, { 0, mpdt_None, 0 }, 0 },
	};
	return data;
}
mpd_Variant NodeOptPos_MPD::getprop( NodeOptPos const* obj, int prop )
{
	switch( prop )
	{
	case 0: return (Node const&) obj->node;
	case 1: return (OptPos const&) obj->optpos;
	default: return mpd_Variant();
	}
}
bool NodeOptPos_MPD::setprop( NodeOptPos* obj, int prop, const mpd_Variant& val )
{
	switch( prop )
	{
	case 0: obj->node = mpd_var_get<Node >(val); return true;
	case 1: obj->optpos = mpd_var_get<OptPos >(val); return true;
	default: return false;
	}
}
mpd_Variant NodeOptPos_MPD::getindex( NodeOptPos const*, const mpd_Variant& ){ return mpd_Variant(); }
bool NodeOptPos_MPD::setindex( NodeOptPos*, const mpd_Variant&, const mpd_Variant& ){ return false; }
const mpd_EnumValue* NodeOptPos_MPD::values(){ static const mpd_KeyValue kvnone = { 0, 0, 0, 0, 0, 0 }; static const mpd_EnumValue none = { 0, 0, 0, &kvnone }; return &none; }
void NodeOptPos_MPD::dump( MPD_STATICDUMP_ARGS(NodeOptPos) )
{
	MPD_DUMPDATA_USESTATICARGS;
	printf( "struct NodeOptPos\n" );
	MPD_DUMPLEV( 0 ); printf( "{\n" );
	if( level < limit )
	{
		MPD_DUMP_PROP( Node, node, pdata->node );
		MPD_DUMP_PROP( OptPos, optpos, pdata->optpos );
	}
	else
	{
		MPD_DUMPLEV( 1 ); printf( "...\n" );
	}
	MPD_DUMPLEV( 0 ); printf( "}" );
}

