#include "vectors.h"

#ifndef PARTICLE_H
#define PARTICLE_H

typedef struct {
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    real damping;
    real inverseMass;
}Particle;

void p_integrate(Particle* p, real dt);

Particle createParticle(Vector3 position, Vector3 velocity, Vector3 acceleration, real damping, real mass);

void p_setPosition(Particle* p, Vector3 position);
void p_setVelocity(Particle* p, Vector3 velocity);
void p_setAcceleration(Particle* p, Vector3 acceleration);
void p_setDamping(Particle* p, real damping);
void p_setMass(Particle* p, real mass);

void clearAccumulator();
#endif