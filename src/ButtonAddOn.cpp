#include "ButtonAddOn.h"
#include <godot_cpp/core/class_db.hpp>
#include<godot_cpp/godot.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/tree.hpp>
using namespace godot;


 ButttonBaseTest::ButttonBaseTest() {
	set_text("Exit");
	// Initialize any variables here.
	//if(Engine::get_singleton()-> is_editor_hint()){
	//	set_process_mode(Node::ProcessMode::PROCESS_MODE_DISABLED);
	//}
	//UtilityFunctions::print("hello this is init");

}

 ButttonBaseTest::~ ButttonBaseTest() {

	// Add your cleanup here.
}


void  ButttonBaseTest::_bind_methods() {
	ClassDB::add_property("GDExample", PropertyInfo(Variant::FLOAT, "amplitude"), "set_amplitude", "get_amplitude");
	ClassDB::bind_method(D_METHOD("BaseTest","words"),&ButttonBaseTest::BaseTest);
	//ClassDB::bind_method(D_METHOD("_pressed"),&ButttonBaseTest::is_pressed);
	ADD_SIGNAL(MethodInfo("hello_world_singal",PropertyInfo(Variant::STRING, "Data")));
	
	
}



void ButttonBaseTest::_process(double delta) {
	
	//UtilityFunctions::print("hello this is process");

}

void ButttonBaseTest::_ready(){
	UtilityFunctions::print("oN READY ");
}
void  ButttonBaseTest::BaseTest(String words){
	UtilityFunctions::print("hello world" + words);
	
	

}
void ButttonBaseTest::_pressed(){
	UtilityFunctions::print(get_global_position());
	get_tree()->quit();
}