OBJ = Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o MatchResult.o Match.o FixturePrinter.o TournamentRound.o Tournament.o TeamCreator.o

all: SimGame

SimGame: Attribute.o CommonSkillCollection.o
	g++ Attribute.o CommonSkillCollection.o -o SimGame

Attribute.o: Attribute.h Attribute.cpp 
	g++ -c Attribute.cpp 

CommonSkillCollection.o: CommonSkillCollection.h CommonSkillCollection.cpp 
	g++ -c CommonSkillCollection.cpp 

PhysicalAttributeCollection.o: PhysicalAttributeCollection.h PhysicalAttributeCollection.cpp
	g++ -c PhysicalAttributeCollection.cpp 

Player.o: Player.h Player.cpp
	g++ -c Player.cpp 

Defender.o: Defender.h Defender.cpp
	g++ -c Defender.cpp 

Goalkeeper.o: Goalkeeper.h Goalkeeper.cpp
	g++ -c Goalkeeper.cpp 

Midfielder.o: Midfielder.h Midfielder.cpp
	g++ -c Midfielder.cpp 

Striker.o: Striker.h Striker.cpp
	g++ -c Striker.cpp 

PlayerPool.o: PlayerPool.h PlayerPool.cpp
	g++ -c PlayerPool.cpp 

Team.o: Team.h Team.cpp
	g++ -c Team.cpp 

FootballLeague.o: FootballLeague.h FootballLeague.cpp
	g++ -c FootballLeague.cpp 

TeamPlayerBattle.o: TeamPlayerBattle.h TeamPlayerBattle.cpp
	g++ -c TeamPlayerBattle.cpp 

MatchResult.o: MatchResult.h MatchResult.cpp
	g++ -c MatchResult.cpp

Match.o: Match.h Match.cpp
	g++ -c Match.cpp

FixturePrinter.o: FixturePrinter.h FixturePrinter.cpp
	g++ -c FixturePrinter.cpp

TournamentRound.o: TournamentRound.h TournamentRound.cpp
	g++ -c TournamentRound.cpp

Tournament.o: Tournament.h Tournament.cpp
	g++ -c Tournament.cpp

TeamCreator.o: TeamCreator.h TeamCreator.cpp
	g++ -c TeamCreator.cpp

AttributeTest: $(OBJ)
	g++ Attribute.o AttributeTest.cpp -o AttributeTest.out

CommonSkillCollectionTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o CommonSkillCollectionTest.cpp -o CommonSkillCollectionTest.out

PhysicalAttributeCollectionTest: $(OBJ)
	g++ Attribute.o PhysicalAttributeCollection.o PhysicalAttributeCollectionTest.cpp -o PhysicalAttributeCollectionTest.out

DefenderTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Defender.o DefenderTest.cpp -o DefenderTest.out

GoalkeeperTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Goalkeeper.o GoalkeeperTest.cpp -o GoalkeeperTest.out

MidfielderTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Midfielder.o MidfielderTest.cpp -o MidfielderTest.out

StrikerTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o StrikerTest.cpp -o StrikerTest.out

PlayerPoolTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o PlayerPoolTest.cpp -o PlayerPoolTest.out

TeamTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o TeamTest.cpp -o TeamTest.out

FootballLeagueTest: $(OBJ)
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o FootballLeagueTest.cpp -o FootballLeagueTest.out

TeamPlayerBattleTest: $(OBJ)
	g++ TeamPlayerBattleTest.cpp $(OBJ) -o TeamPlayerBattleTest.out

MatchResultTest: $(OBJ)
	g++ MatchResultTest.cpp $(OBJ) -o MatchResultTest.out

MatchTest: $(OBJ)
	g++ MatchTest.cpp $(OBJ) -o MatchTest.out

FixturePrinterTest: $(OBJ)
	g++ FixturePrinterTest.cpp $(OBJ) -o FixturePrinterTest.out

TournamentRoundTest: $(OBJ)
	g++ TournamentRoundTest.cpp $(OBJ) -o TournamentRoundTest.out

TeamCreatorTest: $(OBJ)
	g++ TeamCreatorTest.cpp $(OBJ) -o TeamCreatorTest.out

TournamentTest: $(OBJ)
	g++ TournamentTest.cpp $(OBJ) -o a.out

MainFile: $(OBJ)
	g++ TournamentTest.cpp TeamCreatorTest.cpp main.cpp $(OBJ) -o a.out

clean:
	rm -f *.out *.o SimGame