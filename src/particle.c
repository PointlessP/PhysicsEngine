#include "particle.h"

void p_integrate(Particle* p, real dt) {
    if (p->inverseMass <= 0.0f) return;
    if (dt <= 0.0f) return;

    p->position = v3_addScaledVector(p->position, p->velocity, dt);
    Vector3 resultingAcc = p->acceleration;
    p->velocity = v3_addScaledVector(p->velocity, resultingAcc, dt);
    p->velocity = v3_scale(p->velocity, real_pow(p->damping, dt));
    clearAccumulator();
}

Particle createParticle(Vector3 position, Vector3 velocity, Vector3 acceleration, real damping, real mass) {
    Particle p;
    p_setPosition(&p, position);
    p_setVelocity(&p, velocity);
    p_setAcceleration(&p, acceleration);
    p_setDamping(&p, damping);
    p_setMass(&p, mass);
    return p;
}

void p_setPosition(Particle* p, Vector3 position) {
    p->position = position;
}

void p_setVelocity(Particle* p, Vector3 velocity) {
    p->velocity = velocity;
}

void p_setAcceleration(Particle* p, Vector3 acceleration) {
    p->acceleration = acceleration;
}

void p_setDamping(Particle* p, real damping) {
    p->damping = damping;
}

void p_setMass(Particle* p, real mass) {
    p->inverseMass = 1 / mass;
}

void clearAccumulator() {
    return;
}