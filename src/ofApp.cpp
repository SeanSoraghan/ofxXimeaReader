#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ximeaDeviceHolder.openDialog();
	ximeaDeviceHolder.config(XI_RGB24);
	//ximeaDeviceHolder.setFrameRate(2);
	//ximeaDeviceHolder.startAcquisition();
	//ximeaDeviceHolder.setExposure(1000);
	oscSender.setup("localhost", 8080);
}

//--------------------------------------------------------------
void ofApp::update() {
	ximeaDeviceHolder.update();
	// This uses the mouse X position to determine the width of the rect that is read from the camera.
	//ximeaDeviceHolder.setROI(ofRectangle(0, 0, mouseX, 2048));
}

void ofApp::DebugPixels()
{
	auto numPixels = ximeaDeviceHolder.ofxcvgray.getPixels().getWidth() * ximeaDeviceHolder.ofxcvgray.getPixels().getHeight();
	for (float s = 0.0f; s < 1.0f; s += 0.2f)
	{
		ofColor c = ximeaDeviceHolder.ofxcvgray.getPixels().getColor((size_t)(s * numPixels));
		printf("%d %d %d || ", c.r, c.g, c.b);
	}
	printf("\n");
}
//--------------------------------------------------------------
void ofApp::draw() {
	ofClear(0,0,0);
	DebugPixels();
	ximeaDeviceHolder.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
