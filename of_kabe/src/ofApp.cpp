#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);

	magic_kabe.load("T_front.png");
	magic_kabe2.load("T_front.png");
	magic_kabe3.load("T_front.png");

	 px = 0;
	 py = 0;

	mPosition = ofVec2f(px, py);

	
}

//--------------------------------------------------------------
void ofApp::update(){
	mPosition.y += (gravity + 1.0);
}

//--------------------------------------------------------------
void ofApp::draw(){

		magic_kabe.draw(mPosition.x,mPosition.y+100,ofGetWidth(),ofGetHeight());
		magic_kabe2.draw(mPosition.x , mPosition.y-480, ofGetWidth(), ofGetHeight());
		magic_kabe3.draw(mPosition.x,mPosition.y-1060, ofGetWidth(), ofGetHeight());
		
		if (mPosition.y >= (0, 680)) {
			mPosition.y = (0,100);
		}

	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
