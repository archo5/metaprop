
#include "metaprop.hpp"
#define MPD_IMPL
#include "metaprop.mpd.hpp"


mpd_StringView OptPos::getTypeString() const
{
	return mpd_StringView::create( mpd_Value2Name( type ) );
}

void OptPos::setTypeFromString( mpd_StringView name )
{
	type = mpd_Name2Value( name, Unknown );
}


int main()
{
	puts( "--- basic info dumping ---" );
	mpd_DumpInfo<Vec2>();
	mpd_DumpInfo<Vec2_MPD>();
	puts("");
	
	puts( "--- basic data dumping ---" );
	Vec2 x001 = { 1337, 3.14f };
	mpd_DumpData( x001 );
	puts("");
	
	puts( "--- basic info retrieval ---" );
	printf( "- name(): %s\n- propcount(): %d\n", mpd_MetaType<Vec2>::name(), mpd_MetaType<Vec2>::propcount() );
	puts("");
	
	puts( "--- finding properties ---" );
	printf( "property 'x' info = %p\n", mpd_MetaType<Vec2>::findprop( "x" ) );
	printf( "property 'y' info = %p\n", mpd_MetaType<Vec2>::findprop( "y" ) );
	puts("");
	
	puts( "--- reading/writing properties ---" );
	printf( "property 'x' before modification: %f; mpd_Variant::getprop: %f\n", x001.x, mpd_Variant( x001 ).getprop( "x" ).get_float32() );
	mpd_Variant( x001 ).setprop( "x", 12345 );
	printf( "property 'x' after modification: %f; mpd_Variant::getprop: %f\n", x001.x, mpd_Variant( x001 ).getprop( "x" ).get_float32() );
	mpd_DumpData( x001 );
	puts("");
	
	puts( "--- struct-in-struct info dumping ---" );
	mpd_DumpInfo<AABB2>();
	puts("");
	
	puts( "--- sis data dumping ---" );
	AABB2 x002 = { { 1, 2 }, { 3, 5 } };
	mpd_DumpData( x002 );
	puts("\n");
	
	puts( "--- sis info retrieval ---" );
	printf( "- name(): %s\n- propcount(): %d\n", mpd_MetaType<AABB2>::name(), mpd_MetaType<AABB2>::propcount() );
	puts("");
	
	puts( "--- reading/writing subproperties ---" );
	printf( "property 'pmin.x' before modification: %f; mpd_Variant::getprop: %f\n", x002.pmin.x, mpd_Variant( x002 ).getprop( "pmin" ).getprop( "x" ).get_float32() );
	mpd_Variant( x002 ).getprop( "pmin" ).setprop( "x", 12345 );
	printf( "property 'pmin.x' after modification: %f; mpd_Variant::getprop: %f\n", x002.pmin.x, mpd_Variant( x002 ).getprop( "pmin" ).getprop( "x" ).get_float32() );
	mpd_DumpData( x002 );
	puts("\n");
	
	puts( "--- reading/writing properties ---" );
	printf( "property 'pmax' before modification: %f;%f; mpd_Variant::getprop: %f;%f\n", x002.pmax.x, x002.pmax.y,
		mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().x, mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().y );
	mpd_Variant( x002 ).setprop( "pmax", x001 );
	printf( "property 'pmax' after modification: %f;%f; mpd_Variant::getprop: %f;%f\n", x002.pmax.x, x002.pmax.y,
		mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().x, mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().y );
	mpd_DumpData( x002 );
	puts("\n");
	
	puts( "--- print variants ---" );
	mpd_DumpData( mpd_Variant() ); puts("");
	mpd_DumpData( mpd_Variant(x002).getprop("pmin").getprop("x") ); puts("");
	mpd_DumpData( mpd_Variant(x002).getprop("pmin") ); puts("");
	puts("");
	
	puts( "--- enum info dumping ---" );
	mpd_DumpInfo<PosType>();
	puts("");
	
	puts( "--- enum/pointer-to-struct info dumping ---" );
	mpd_DumpInfo<OptPos>();
	puts("");
	
	puts( "--- enum/pointer-to-struct data dumping ---" );
	OptPos x003 = { Relative, &x001, NULL, &x001, NULL };
	mpd_DumpData( x003 );
	puts("\n");
	
	puts( "--- enum/fake prop interaction ---" );
	puts( "> retrieving fake property (enum name)" );
	mpd_DumpData( mpd_Variant(x003).getprop("typestr") ); puts("");
	puts( "> setting fake property (enum name)" );
	mpd_Variant(x003).setprop( "typestr", "Absolute" );
	mpd_DumpData( mpd_Variant(x003).getprop("typestr") ); puts("");
	puts("");
	
	puts( "--- pointer target retrieval ---" );
	mpd_DumpData( mpd_Variant(x003).getprop("ppos").get_target() ); puts("");
	mpd_DumpData( mpd_Variant(x003).getprop("pdir").get_target() ); puts(" -- variant->getprop(pdir)->get_target()");
	mpd_DumpData( mpd_Variant(x003).getprop("pdir").getprop("x") ); puts(" -- variant->getprop(pdir)->getprop(x)");
	puts("");
	
	puts( "--- recursive structures ---" );
	Node x004a = { NULL, NULL, false };
	Node x004b = { &x004a, NULL, true };
	Node x004c = { NULL, NULL, false };
	Node x004 = { &x004b, &x004c, true };
	mpd_DumpInfo<Node>();
	mpd_DumpData( x004 ); puts("");
	puts("");
	
	puts( "--- recursive dumping ---" );
	mpd_DumpInfo( mpd_MetaType<NodeOptPos>::inst() );
	puts("");
	
	puts( "--- std::string ---" );
	mpd_DumpInfo<std::string>();
	std::string x005 = "testString";
	mpd_DumpData( x005 ); puts("");
	puts("> resizing via property (to 7)...");
	mpd_Variant( x005 ).setprop( "size", 7 );
	mpd_DumpData( x005 ); puts("");
	puts("> setting character 0 to 'f'...");
	mpd_Variant( x005 ).setindex( 0, 'f' );
	mpd_DumpData( x005 ); puts("");
	puts("> setting character 1 to 'a'...");
	mpd_Variant( x005 ).setindex( 1, 'a' );
	mpd_DumpData( x005 ); puts("");
	printf( "character 1: '%c'\n", mpd_Variant( x005 ).getindex( 1 ).get_int8() );
	puts("> setting whole string to 'whoa'...");
	mpd_Variant( x005 ).setprop( "data", "whoa" );
	mpd_DumpData( x005 ); puts("");
	puts("");
	
	puts( "--- boxed return values ---" );
	BoxTest x006 = { Absolute, 123 };
	puts("> random vec2");
	Vec2 randvec2 = mpd_Variant( x006 ).getprop( "random_vec2" ).get_obj<Vec2>();
	printf( "value = %f;%f\n", randvec2.x, randvec2.y );
	puts("> random string");
	std::string randstr = mpd_Variant( x006 ).getprop( "random_str" ).get_obj<std::string>();
	printf( "value = %s\n", randstr.c_str() );
	puts("");
	
	puts( "--- shortened enum ---" );
	printf( "real enum value: %d\n", (int) x006.postype );
	printf( "MPD enum value: %d\n", (int) mpd_Variant( x006 ).getprop( "postype" ).get_enum() );
	mpd_DumpData( mpd_Variant( x006 ).getprop( "postype" ) ); puts("");
	mpd_DumpData( x006 ); puts("");
	mpd_DumpData( mpd_Variant( x006 ) ); puts("");
	puts("");
	
	puts( "--- locations ---" );
	mpd_Location loc_x004b( x004b ); printf( "x004b ptr: %p, loc ptr: %p, loc prop: %d\n", &x004b, loc_x004b.get_ptr(), loc_x004b.prop_id );
	mpd_Location loc_x004b_lft( x004b, "lft" ); printf( "x004b.lft ptr: %p, loc ptr: %p, loc prop: %d\n", x004b.lft.ptr, loc_x004b_lft.get_ptr(), loc_x004b_lft.prop_id );
	printf("x004b contains self: %s (expecting 'true')\n", loc_x004b.contains( loc_x004b ) ? "true" : "false" );
	printf("x004b contains lft: %s (expecting 'true')\n", loc_x004b.contains( loc_x004b_lft ) ? "true" : "false" );
	printf("x004 contains x004a: %s (expecting 'true')\n", mpd_Location( x004 ).contains( mpd_Location( x004a ) ) ? "true" : "false" );
	printf("x004a contains x004: %s (expecting 'false')\n", mpd_Location( x004a ).contains( mpd_Location( x004 ) ) ? "true" : "false" );
	puts("");
	
	return 0;
}
