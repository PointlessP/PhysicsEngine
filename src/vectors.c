#include "vectors.h"

Vector3 v3_zero() {
    Vector3 vec = {0, 0, 0};
    return vec;
}

Vector3 v3_one() {
    Vector3 vec = {1, 1, 1};
    return vec;
}

Vector3 v3_invert(Vector3 vec) {
    vec.x = -vec.x;
    vec.y = -vec.y;
    vec.z = -vec.z;
    return vec;
}

Vector3 v3_normalize(Vector3 vec) {
    real m = v3_magnitude(vec);

    if (m != 0) {
        vec.x /= m;
        vec.y /= m;
        vec.z /= m;
    }
    return vec;
}

Vector3 v3_scale(Vector3 vec, real value) {
    vec.x *= value;
    vec.y *= value;
    vec.z *= value;
    return vec;
}

Vector3 v3_add(Vector3 vec1, Vector3 vec2) {
    Vector3 vec = {vec1.x + vec2.x, vec1.y + vec2.y, vec1.z + vec2.z};
    return vec;
}

Vector3 v3_sub(Vector3 vec1, Vector3 vec2) {
    Vector3 vec = {vec1.x - vec2.x, vec1.y - vec2.y, vec1.z - vec2.z};
    return vec;
}

Vector3 v3_addScaledVector(Vector3 vec1, Vector3 vec2, real value) {
    Vector3 vec = {vec1.x + vec2.x * value, vec1.y + vec2.y * value, vec1.z + vec2.z * value};
    return vec;
}

Vector3 v3_componentProduct(Vector3 vec1, Vector3 vec2) {
    Vector3 vec = {vec1.x * vec2.x, vec1.y * vec2.y, vec1.z * vec2.z};
    return vec;
}

real v3_dotProduct(Vector3 vec1, Vector3 vec2) {
    return vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;
}

Vector3 v3_vectorProduct(Vector3 vec1, Vector3 vec2) {
    Vector3 vec;
    vec.x = vec1.y * vec2.z - vec1.z * vec2.y;
    vec.y = vec1.z * vec2.x - vec1.x * vec2.z;
    vec.z = vec1.x * vec2.y - vec1.y * vec2.x;
    return vec;
}

real v3_magnitude(Vector3 vec) {
    return sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
}

real v3_squareMagnitude(Vector3 vec) {
    return vec.x * vec.x + vec.y * vec.y + vec.z * vec.z;
}