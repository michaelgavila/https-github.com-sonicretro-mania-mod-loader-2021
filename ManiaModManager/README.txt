Bygg alle prosjektene individuelt om de ikke gjør det automatisk ved rebuild all.
NB! Det er en pre-build event som må finnes før du kan kjøre prosjektet i ManiaModManager:

xcopy "$(outDir)" "$(SolutionDir)ManiaModManager\bin\Debug\mods" /h /i /c /k /e /r /y /f
xcopy "$(SolutionDir)data" "$(SolutionDir)ManiaModManager\bin\Debug\mods" /h /i /c /k /e /r /y /f
xcopy "$(SolutionDir)extlib\bass" "$(SolutionDir)ManiaModManager\bin\Debug\" /h /i /c /k /e /r /y /f

Innholdet fra /Debug eller /Release mappen må kopieres inn i Sonic Mania spill mappen. 

Husk at det er mulig å sette path til spillet i 