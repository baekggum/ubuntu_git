#include <iostream>
using namespace std;
class Game{
  Card card[100];
  Player player[2];
  int num_players;
  void shuffle(card);
  public:
  void run(); 

};
Class Card{

};
Class Player{
  int player;
  public:
  void put();
  void correct();
};
void Game::shuffle(card){
  //카드를 섞는 함수
}
void Player::put(){

}
void Player::correct(){

}
void Game::run(){
  shuffle(card);

  while(1){
    for(int p=0;p<num_players;p++){
      player[p].put();
      player[p].correct();
    }
    for(p=0;p<num_players;p++)
      if(player[p].card<=0)
        break;
  }
}
int main(){
  Game game;
  game.init();
  game.run();

  return 0;
}
