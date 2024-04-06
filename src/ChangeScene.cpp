#include "ChangeScene.h"
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


 ChangeScene::ChangeScene() {
	// Initialize any variables here.
	//if(Engine::get_singleton()-> is_editor_hint()){
	//	set_process_mode(Node::ProcessMode::PROCESS_MODE_DISABLED);
	//}
	//UtilityFunctions::print("hello this is init");

}

ChangeScene::~ ChangeScene() {

	// Add your cleanup here.
}


void  ChangeScene::_bind_methods() {

    ClassDB::bind_method(D_METHOD("get_Path"), &ChangeScene::get_Path);
    ClassDB::bind_method(D_METHOD("Set_Path","s"), &ChangeScene::Set_Path);
	ClassDB::add_property("ChangeScene", PropertyInfo(Variant::STRING, "Path"), "Set_Path", "get_Path");
	ClassDB::bind_method(D_METHOD("BaseTest","words"),&ChangeScene::BaseTest);
	//ClassDB::bind_method(D_METHOD("_pressed"),&ButttonBaseTest::is_pressed);
	ADD_SIGNAL(MethodInfo("hello_world_singal",PropertyInfo(Variant::STRING, "Data")));
	
	
}



void ChangeScene::_process(double delta) {
	
	//UtilityFunctions::print("hello this is process");

}

void ChangeScene::_ready(){
	UtilityFunctions::print("oN READY ");
}
void  ChangeScene::BaseTest(String words){
	UtilityFunctions::print("hello world" + words);
	
	

}
String ChangeScene::get_Path(){
    return Path;
 }
void ChangeScene::Set_Path(String s){
    Path = s;
}


void ChangeScene::_pressed(){
	UtilityFunctions::print(Path);
    SceneTree tree;
	get_tree()->change_scene_to_file(Path);

	//get_tree()->quit();
}