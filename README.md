# FT\_HideAndSeek

This mechanic is you creating a Hide and Seek/ Hunter Stalker style game



Use P to show the navmesh









Easy

* Play about with some of the different AI logic, I have put into the \*\*StalkerAIController (header file)\*\*, by changing the bIsStalkingPlayer bool
* Have the AI constantly follow the player
* Using the getpawn() (\*\*StalkerAIController->Tick\*\*) you can adjust the character parameters, try to make the stalker \*\*2/3rd\*\* of the player max speed, you can change the player speed with

'''

Cast<ACharacter>(GetPawn())->GetCharacterMovement()->MaxWalkSpeed = ;

'''

Medium



* Look at the \*\*FT\_HUD\*\* focus topic, and the Naïve State machine, try to implement that with 3 key states, IDLE (Player is more then 1000 away), HUNT (Players is less then 1000 away), KILLED (Player is less then 100 away, stop player movement)
* Add feedback to the player, so they know when they are safe, hunted and dead, this could be audio or via a sign in a Widget.
* Add an Objective, such as a collectables for the player (\*\*FT\_ReloadingAndAmmo\*\*), that effects the AI, e.g. ever time the player collects on the AI speed is slightly increased and the detection radius increases



Hard

* Add suttle feedback like a screen effect to show when the player is in danger, such as in \*\*Slenderman and the Eight Pages\*\*
* See how you can implement a patrol route for the AI like in the lab sheets
* Add feedback to the AI, which is ether an icon showing \[line of sight (Unreal has C++ built in fucntion)](https://dev.epicgames.com/documentation/en-us/unreal-engine/BlueprintAPI/Controller/LineOfSightTo), or ghost image of where the player was last seen forcing it goes to that point first



