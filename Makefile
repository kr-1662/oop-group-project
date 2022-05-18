OBJ = Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o MatchResult.o Match.o FixturePrinter.o TournamentRound.o Tournament.o TeamCreator.o

all: SimGame

SimGame: Attribute.o CommonSkillCollection.o
	g++ Attribute.o CommonSkillCollection.o -o SimGame

Attribute.o: Attribute.h Attribute.cpp 
	g++ -c Attribute.cpp 

AttributeTest: Attribute.o
	g++ Attribute.o AttributeTest.cpp -o AttributeTest.out

CommonSkillCollection.o: CommonSkillCollection.h CommonSkillCollection.cpp 
	g++ -c CommonSkillCollection.cpp 

CommonSkillCollectionTest: Attribute.o CommonSkillCollection.o
	g++ Attribute.o CommonSkillCollection.o CommonSkillCollectionTest.cpp -o CommonSkillCollectionTest.out

PhysicalAttributeCollection.o: PhysicalAttributeCollection.h PhysicalAttributeCollection.cpp
	g++ -c PhysicalAttributeCollection.cpp 

PhysicalAttributeCollectionTest: Attribute.o PhysicalAttributeCollection.o
	g++ Attribute.o PhysicalAttributeCollection.o PhysicalAttributeCollectionTest.cpp -o PhysicalAttributeCollectionTest.out

Player.o: Player.h Player.cpp
	g++ -c Player.cpp 

Defender.o: Defender.h Defender.cpp
	g++ -c Defender.cpp 

DefenderTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Defender.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Defender.o DefenderTest.cpp -o DefenderTest.out

Goalkeeper.o: Goalkeeper.h Goalkeeper.cpp
	g++ -c Goalkeeper.cpp 

GoalkeeperTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Goalkeeper.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Goalkeeper.o GoalkeeperTest.cpp -o GoalkeeperTest.out

Midfielder.o: Midfielder.h Midfielder.cpp
	g++ -c Midfielder.cpp 

MidfielderTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Midfielder.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Midfielder.o MidfielderTest.cpp -o MidfielderTest.out

Striker.o: Striker.h Striker.cpp
	g++ -c Striker.cpp 

StrikerTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o StrikerTest.cpp -o StrikerTest.out

PlayerPool.o: PlayerPool.h PlayerPool.cpp
	g++ -c PlayerPool.cpp 

PlayerPoolTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o 
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o PlayerPoolTest.cpp -o PlayerPoolTest.out

Team.o: Team.h Team.cpp
	g++ -c Team.cpp 

TeamTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o TeamTest.cpp -o TeamTest.out

FootballLeague.o: FootballLeague.h FootballLeague.cpp
	g++ -c FootballLeague.cpp 

FootballLeagueTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o FootballLeagueTest.cpp -o FootballLeagueTest.out

TeamPlayerBattle.o: TeamPlayerBattle.h TeamPlayerBattle.cpp
	g++ -c TeamPlayerBattle.cpp 

TeamPlayerBattleTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o TeamPlayerBattleTest.cpp -o TeamPlayerBattleTest.out

MatchResult.o: MatchResult.h MatchResult.cpp
	g++ -c MatchResult.cpp

MatchResultTest: MatchResult.o
	g++ MatchResult.o MatchResultTest.cpp -o MatchResultTest.out

Match.o: Match.h Match.cpp
	g++ -c Match.cpp

MatchTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o MatchResult.o Match.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o MatchResult.o Match.o MatchTest.cpp -o MatchTest.out

FixturePrinter.o: FixturePrinter.h FixturePrinter.cpp
	g++ -c FixturePrinter.cpp

FixturePrinterTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o FixturePrinter.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o FixturePrinter.o FixturePrinterTest.cpp -o FixturePrinterTest.out

TournamentRound.o: TournamentRound.h TournamentRound.cpp
	g++ -c TournamentRound.cpp

TournamentRoundTest: Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o MatchResult.o Match.o FixturePrinter.o TournamentRound.o
	g++ Attribute.o CommonSkillCollection.o PhysicalAttributeCollection.o Player.o Striker.o Midfielder.o Defender.o Goalkeeper.o PlayerPool.o Team.o FootballLeague.o TeamPlayerBattle.o MatchResult.o Match.o FixturePrinter.o TournamentRound.o TournamentRoundTest.cpp -o TournamentRoundTest.out

Tournament.o: Tournament.h Tournament.cpp
	g++ -c Tournament.cpp

TeamCreator.o: TeamCreator.h TeamCreator.cpp
	g++ -c TeamCreator.cpp

TeamCreatorTest: $(OBJ)
	g++ TeamCreatorTest.cpp $(OBJ) -o TeamCreatorTest.out

TournamentTest: $(OBJ)
	g++ TournamentTest.cpp $(OBJ) -o TournamentTest.out

clean:
	rm -f *.out *.o SimGame