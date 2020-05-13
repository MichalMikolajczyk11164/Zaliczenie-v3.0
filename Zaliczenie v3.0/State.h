#ifndef STATE_H
#define STATE_H

#include <vector>
using namespace std;
using namespace sf;

class State
{
private:
	vector<Texture*> textures;
public:
	State();
	virtual ~State();

	virtual void updateState() = 0;
	virtual void renderState() = 0;
	void endState();
	void pauseState();
	void unpauseState();

}
#endif
