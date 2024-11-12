CC=gcc

physicsEngine:
	gcc -o PhysicsEngine.exe -Iinc -Llib $(wildcard src/*.c) -O1 -Wall -std=c99 -Wno-missing-braces