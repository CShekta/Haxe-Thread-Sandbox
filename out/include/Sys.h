// Generated by Haxe 3.3.0
#ifndef INCLUDED_Sys
#define INCLUDED_Sys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Sys)
HX_DECLARE_CLASS2(haxe,io,Input)



class HXCPP_CLASS_ATTRIBUTES Sys_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Sys_obj OBJ_;
		Sys_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Sys")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Sys"); }
		static hx::ObjectPtr< Sys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sys_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00"); }

		static  ::haxe::io::Input _hx_stdin();
		static ::Dynamic _hx_stdin_dyn();

		static void sleep(Float seconds);
		static ::Dynamic sleep_dyn();

};


#endif /* INCLUDED_Sys */ 
