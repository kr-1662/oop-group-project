all: SimGame

SimGame: Attribute.o CommonSkillCollection.o
	g++ Attribute.o CommonSkillCollection.o -o SimGame

Attribute.o: Attribute.h Attribute.cpp 
	g++ -c Attribute.cpp -o Attribute.o

AttributeTest: Attribute.o
	g++ Attribute.o AttributeTest.cpp -o AttributeTest.out

CommonSkillCollection.o: CommonSkillCollection.h CommonSkillCollection.cpp 
	g++ -c CommonSkillCollection.cpp -o CommonSkillCollection.o

CommonSkillCollectionTest: Attribute.o CommonSkillCollection.o
	g++ Attribute.o CommonSkillCollection.o CommonSkillCollectionTest.cpp -o CommonSkillCollectionTest.out

PhysicalAttributeCollection.o: PhysicalAttributeCollection.h PhysicalAttributeCollection.cpp
	g++ -c PhysicalAttributeCollection.cpp -o PhysicalAttributeCollection.o

PhysicalAttributeCollectionTest: Attribute.o PhysicalAttributeCollection.o
	g++ Attribute.o PhysicalAttributeCollection.o PhysicalAttributeCollectionTest.cpp -o PhysicalAttributeCollectionTest.out

Player.o: Player.h Player.cpp
	g++ -c CommonSkillCollection.o PhysicalAttributeCollection.o Player.cpp -o Player.o

Defender.o: Defender.h Defender.cpp
	g++ -c Defender.cpp -o Defender.o

DefenderTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Defender.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Defender.o DefenderTest.cpp -o DefenderTest.out

Goalkeeper.o: Goalkeeper.h Goalkeeper.cpp
	g++ -c Goalkeeper.cpp -o Goalkeeper.o

GoalkeeperTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Goalkeeper.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Goalkeeper.o GoalkeeperTest.cpp -o GoalkeeperTest.out

Midfielder.o: Midfielder.h Midfielder.cpp
	g++ -c Midfielder.cpp -o Midfielder.o

MidfielderTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Midfielder.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Midfielder.o MidfielderTest.cpp -o MidfielderTest.out

Striker.o: Striker.h Striker.cpp
	g++ -c Striker.cpp -o Striker.o

StrikerTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o StrikerTest.cpp -o StrikerTest.out

PlayerPool.o: PlayerPool.h PlayerPool.cpp
	g++ -c PlayerPool.cpp -o PlayerPool.o

PlayerPoolTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o 
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o PlayerPoolTest.cpp -o PlayerPoolTest.out

clean:
	rm -f *.out SimGame