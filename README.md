Drupal-GitHub
=============

A Drupal install profile attempting to integrate Drupal and GitHub.

Roadmap
-------

### Minimum Viable Product

- Use OAuth Connector to connect each Drupal user to their GitHub account.
- Simulate rough features and layout of [Project][project-modules] & [Project
  issue tracking][project_issue-modules] modules.
- Link to GitHub issues queues.
- Link to code on GitHub.
- List tags on appropriately-formatted branches as releases.
- Choose repos to list, and give each a project-type
(module/theme/profile/drush).
- Create endpoint for manual service hook to be directed at, so that the site
can check for changes on push.

### Future

- Auto-detect which repos might be drupal projects, and suggest inclusion.
- Favourite modules using GitHub stars.
- Tighter integration with GitHub issues.
- Travis CI for testing.
- Allow vote or admin privilige to set repo in network that is "official".
- Take description from README.
- Categorize via whitelist of hashtags in github project description?
- Accomodate release notes with first-class git tag commit message.
- Show all repos in network graph.
- List open/closed issues.
- Set up service hooks on GitHub automatically.
- Set up queue (Redis?).

<!-- Links -->
   [project-modules]:       http://drupal.org/project/project
   [project_issue-modules]: http://drupal.org/project/project_issue
