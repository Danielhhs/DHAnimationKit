#version 300 es

precision highp float;

uniform sampler2D s_tex;

in vec2 v_texCoords;
in vec3 v_normal;

layout(location = 0) out vec4 out_color;

const vec3 c_light = vec3(0.5, 0.5, 1.f);

void main() {
    out_color = texture(s_tex, v_texCoords);
    float ndotl = dot(normalize(v_normal), normalize(c_light));
    out_color.a = ndotl * 0.618 + 0.382;
}