std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
    // Your code goes here. Have fun!
    Fighter* first;
    Fighter* second;
    Fighter* tmp;
    if (fighter1->getName() == firstAttacker) {
      first = fighter1, second = fighter2;
    } else {
      first = fighter2; second = fighter1;
    }
    while (second->getHealth() > 0 || first->getHealth() > 0) {
      int healthLost = second->getHealth() - first->getDamagePerAttack();
      second->setHealth(healthLost);
      tmp = first;
      first = second;
      second = tmp;
    }
    if (second->getHealth() <= 0) {
      return first->getName();
    } else {
      return second->getName();
    }
}
