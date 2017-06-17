#version 450
//fragment shader operates on each pixel in a given polygon

in vec2 fragmentPosition;
in vec4 fragmentColor;

//3 component float vector outputted to the screen for each pixel.
out vec4 color;

uniform float time;

void main(){
	
	
	/* color = vec4(fragmentColor.r * (cos(fragmentPosition.x +time*8.0) +1.0 )*0.5, 
				 fragmentColor.g * (cos(fragmentPosition.y +time*4.0) +1.0 )*0.5, 
				 fragmentColor.b * (cos(fragmentPosition.x*0.4 +time*4.0) +1.0 )*0.5,
				 fragmentColor.a); */
	
	color = vec4(fragmentColor.r * (sin(sqrt(pow(fragmentPosition.y,2)+pow(fragmentPosition.x,2)) + time) +1.0 )*0.5, 
				 fragmentColor.g * (cos(sqrt(pow(fragmentPosition.y,2)+pow(fragmentPosition.x,2)) + time) +1.0 )*0.5, 
				 fragmentColor.b * (cos(sqrt(pow(fragmentPosition.y,2)+pow(fragmentPosition.x,2)) + time) +1.0 )*0.5,
				 fragmentColor.a); 
	
	
	/* color = fragmentColor + vec4(1.0 *cos(time) +1.0 * 0.5,
								1.0 *cos(time +2.0) +1.0 * 0.5, 
								1.0 *sin(time +1.0) +1.0 * 0.5,
								0.0); */
	
}


//cos(sqrt(pow(fragmentPosition.x-512,2)+pow(fragmentPosition.y-384,2))+time)
