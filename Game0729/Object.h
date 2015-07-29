#pragma once
class Object {
protected:
	Object *parent;
public:
	Object(){}
	virtual ~Object() {}

	void setParent(Object *p) {
		parent = p;
	}
	Object* getParent() {
		return parent;
	}
	
	virtual void Input() {}
	virtual void Update() {}
	virtual void Render() {}
	virtual void Clear() {}
};