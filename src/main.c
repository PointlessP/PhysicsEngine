#include <stdio.h>
#include "particle.h"
#include <sys/time.h>

int main(int argc, char** argv){

    Vector3 acc = {0, -9.81, 0};
    Vector3 vel = {0, 5, 0};
    Particle p = createParticle(v3_zero(), vel, acc, 1, 1);

    real dt;
    real totalTime = 0;
    struct timeval tv_prevTime;
    struct timeval tv_currTime;

    gettimeofday(&tv_prevTime, 0);
    while (totalTime < 10)
    {
        gettimeofday(&tv_currTime, 0);
        dt = (tv_currTime.tv_sec - tv_prevTime.tv_sec) + (tv_currTime.tv_usec - tv_prevTime.tv_usec) / 1e6;
        totalTime += dt;
        p_integrate(&p, dt);
        printf("Time: %f\t%f\t%f\t%f\n", totalTime, p.position.y, p.velocity.y, p.acceleration.y);
        tv_prevTime = tv_currTime;
    }
    
    return 0;
}