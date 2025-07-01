# Dummy C project for testing ceedling and gcov

## What?

Sample project for testing [ceedling](https://www.throwtheswitch.org/ceedling) and 
[gcov](https://gcc.gnu.org/onlinedocs/gcc/Gcov.html) in the context of 
[analyzing a C project](https://docs.sonarsource.com/sonarqube-server/latest/analyzing-source-code/languages/c-family/overview/).

## How?

You can check how to install ceedling and gcov in their respective documentation pages, see above links.

Build the project, run the test, generate the coverage report and the compilation database 
[compile_commands.json](https://docs.sonarsource.com/sonarqube-server/latest/analyzing-source-code/languages/c-family/prerequisites/#generating-a-compilation-database):
```shell
$ ~/playground/build-wrapper-linux-x86/build-wrapper-linux-x86-64 --out-dir bw_output ceedling clean gcov:all release
```

Scan the project:
```shell
$ sonar-scanner -Dsonar.organization=luis-rodriguezfernandez-sonarsource \
  -Dsonar.projectKey=luis-rodriguezfernandez-sonarsource_myceedlingproject \
  -Dsonar.sources=src \
  -Dsonar.cfamily.compile-commands=bw_output/compile_commands.json \
  -Dsonar.host.url=https://sonarcloud.io 
  -Dsonar.token=${MY_TOKEN} 
  -Dsonar.coverageReportPaths=build/artifacts/gcov/ReportGenerator/SonarQube/SonarQube.xml 
  -Dsonar.verbose=true
```

In this example we are specifying the [generic test coverage report format](https://docs.sonarsource.com/sonarqube-server/latest/analyzing-source-code/test-coverage/generic-test-data/#generic-test-coverage)

