#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxAutoReloadedShader.h"

#include "Math/MathUtils.h"

#include "Utils/Cameras/ofxFirstPersonCamera.h"
#include "Utils/DrawingHelpers.h"
#include "Utils/ofTrueTypeFontExt.h"
#include "Utils/FboPingPong.h"

#include "ParticleSystemInstancedGeometryGPU.h"

class ofApp : public ofBaseApp
{
	public:
		
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
	
		float					time;
		float					timeStep;
	
		ParticleSystemInstancedGeometryGPU	particles;
		ofxFirstPersonCamera	camera;
	
		ofLight					light[1];
	
		ofxPanel				guiLight;

	
		ofParameter<ofFloatColor>	globalAmbient;

		ofParameter<ofVec3f>	light1Position;
		ofParameter<ofColor>	light1Ambient;
		ofParameter<ofColor>	light1Diffuse;
		ofParameter<ofColor>	light1Specular;
	
		bool					drawGui;
	
		ofTrueTypeFontExt		fontSmall;
	
};