#ifndef CHANGESCENE_H
#define CHANGESCENE_H


#include <godot_cpp/classes/button.hpp>

namespace godot {

class ChangeScene : public Button {
	GDCLASS(ChangeScene , Button)

private:
String Path ="path";

protected:
	static void _bind_methods();

public:
	ChangeScene();//constructor
	~ChangeScene();

	void _pressed() override;
	void _ready();
	void BaseTest(String words);
	void _process(double delta) override;
    String get_Path();
    void Set_Path(String s);
};

}

#endif